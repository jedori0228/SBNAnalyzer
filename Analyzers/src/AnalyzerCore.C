#include "AnalyzerCore.h"

AnalyzerCore::AnalyzerCore(){

  debugLevel = 0;
  outfile = NULL;

}

AnalyzerCore::~AnalyzerCore(){

  //=== hist maps

  for(std::map< TString, TH1D* >::iterator mapit = maphist_TH1D.begin(); mapit!=maphist_TH1D.end(); mapit++){
    delete mapit->second;
  }
  maphist_TH1D.clear();

  for(std::map< TString, TH2D* >::iterator mapit = maphist_TH2D.begin(); mapit!=maphist_TH2D.end(); mapit++){
    delete mapit->second;
  }
  maphist_TH2D.clear();

  for(std::map< TString, TH3D* >::iterator mapit = maphist_TH3D.begin(); mapit!=maphist_TH3D.end(); mapit++){
    delete mapit->second;
  }
  maphist_TH3D.clear();
  
  //==== output rootfile

  if(outfile) outfile->Close();
  delete outfile;

  //==== Tools
  //delete muonGEScaleSyst;

}

//==== Objects

Spill AnalyzerCore::GetSpill(){
  Spill sp;
  sp.SetEventInfo(rec_hdr_run, rec_hdr_subrun, rec_hdr_evt, rec_hdr_pot);
  return sp;
}

vector<Slice> AnalyzerCore::GetAllSlices(){

  std::vector<Slice> out;

  ULong64_t idx_Track(0);
  ULong64_t idx_Shower(0), idx_ShowerdEdX(0);

  if(debugLevel>=2){
    cout << "[AnalyzerCore::GetAllSlices] Called" << endl;
    cout << "[AnalyzerCore::GetAllSlices] (Number of slices of this event) = " << rec_slc__length << endl;
    cout << "[AnalyzerCore::GetAllSlices] (Number of tracks of this event) = " << rec_slc_reco_trk__totarraysize << endl;
    cout << "[AnalyzerCore::GetAllSlices] (Number of showers of this event) = " << rec_slc_reco_shw__totarraysize << endl;
    cout << "[AnalyzerCore::GetAllSlices] (Number of dEdx of this event) = " << rec_slc_reco_shw_dEdx__totarraysize << endl;
  }

  for(Int_t i_sl=0; i_sl<rec_slc__length; i_sl++){

    if(debugLevel>=2){
      cout << "[AnalyzerCore::GetAllSlices] " << i_sl << " th slice" << endl;
      cout << "[AnalyzerCore::GetAllSlices]   (Number of tracks of this slice) = " << rec_slc_reco_ntrk[i_sl] << endl;
      cout << "[AnalyzerCore::GetAllSlices]   (Number of showers of this slice) = " << rec_slc_reco_nshw[i_sl] << endl;
    }

    Slice sl;
    //==== Vertex
    Vertex v(rec_slc_vertex_x[i_sl], rec_slc_vertex_y[i_sl], rec_slc_vertex_z[i_sl]);
    sl.SetVertex(v);
    //==== Tracks
    // rec_slc_reco_ntrk[i_sl] == rec_slc_reco_trk__length[i_sl]
    vector<SliceTrack> trks;
    for(ULong64_t i_trk=0; i_trk<rec_slc_reco_ntrk[i_sl]; i_trk++,idx_Track++){
      SliceTrack trk;
      //==== Info
      trk.SetBestPlane(rec_slc_reco_trk_bestplane[idx_Track]);
      trk.SetTrackID(rec_slc_reco_trk_ID[idx_Track]);
      //==== Direction
      trk.SetDirection( rec_slc_reco_trk_dir_x[idx_Track],
                        rec_slc_reco_trk_dir_y[idx_Track],
                        rec_slc_reco_trk_dir_z[idx_Track],
                        rec_slc_reco_trk_dir_end_x[idx_Track],
                        rec_slc_reco_trk_dir_end_y[idx_Track],
                        rec_slc_reco_trk_dir_end_z[idx_Track]);
      //==== Position
      trk.SetPosition( rec_slc_reco_trk_start_x[idx_Track],
                       rec_slc_reco_trk_start_y[idx_Track],
                       rec_slc_reco_trk_start_z[idx_Track],
                       rec_slc_reco_trk_end_x[idx_Track],
                       rec_slc_reco_trk_end_y[idx_Track],
                       rec_slc_reco_trk_end_z[idx_Track]);
      //==== Length
      trk.SetLength(rec_slc_reco_trk_len[idx_Track]);
      //==== Family
      trk.SetFamily( rec_slc_reco_trk_ndaughters[idx_Track],
                     rec_slc_reco_trk_npts[idx_Track],
                     rec_slc_reco_trk_parent[idx_Track],
                     rec_slc_reco_trk_parent_is_primary[idx_Track]);
      //==== Chi2Pid
      trk.SetChi2Pid0( rec_slc_reco_trk_chi2pid0_chi2_kaon[idx_Track],
                       rec_slc_reco_trk_chi2pid0_chi2_muon[idx_Track],
                       rec_slc_reco_trk_chi2pid0_chi2_pion[idx_Track],
                       rec_slc_reco_trk_chi2pid0_chi2_proton[idx_Track],
                       rec_slc_reco_trk_chi2pid0_pdg[idx_Track],
                       rec_slc_reco_trk_chi2pid0_pid_ndof[idx_Track],
                       rec_slc_reco_trk_chi2pid0_pida[idx_Track]);
      trk.SetChi2Pid1( rec_slc_reco_trk_chi2pid1_chi2_kaon[idx_Track],
                       rec_slc_reco_trk_chi2pid1_chi2_muon[idx_Track],
                       rec_slc_reco_trk_chi2pid1_chi2_pion[idx_Track],
                       rec_slc_reco_trk_chi2pid1_chi2_proton[idx_Track],
                       rec_slc_reco_trk_chi2pid1_pdg[idx_Track],
                       rec_slc_reco_trk_chi2pid1_pid_ndof[idx_Track],
                       rec_slc_reco_trk_chi2pid1_pida[idx_Track]);
      trk.SetChi2Pid2( rec_slc_reco_trk_chi2pid2_chi2_kaon[idx_Track],
                       rec_slc_reco_trk_chi2pid2_chi2_muon[idx_Track],
                       rec_slc_reco_trk_chi2pid2_chi2_pion[idx_Track],
                       rec_slc_reco_trk_chi2pid2_chi2_proton[idx_Track],
                       rec_slc_reco_trk_chi2pid2_pdg[idx_Track],
                       rec_slc_reco_trk_chi2pid2_pid_ndof[idx_Track],
                       rec_slc_reco_trk_chi2pid2_pida[idx_Track]);

      trks.push_back(trk);
    }
    sl.SetTracks(trks);
    //==== Shower
    // rec_slc_reco_nshw[i_sl] == rec_slc_reco_shw__length[i_sl]
    vector<SliceShower> shws;
    if(debugLevel>=2) cout << "[AnalyzerCore::GetAllSlices]   (Number of shower of this slice) = " << rec_slc_reco_nshw[i_sl] << endl;
    for(ULong64_t i_shw=0; i_shw<rec_slc_reco_nshw[i_sl]; i_shw++,idx_Shower++){
      if(debugLevel>=2) cout << "[AnalyzerCore::GetAllSlices]   " << i_shw << " th shower (idx_Shower = " << idx_Shower << ")" << endl;
      SliceShower shw;
      //==== Info
      shw.SetBestPlane(rec_slc_reco_shw_bestplane[idx_Shower]);
      shw.SetShowerID(rec_slc_reco_shw_ID[idx_Shower]);
      //==== Direction
      shw.SetDirection( rec_slc_reco_shw_dir_x[idx_Shower],
                        rec_slc_reco_shw_dir_y[idx_Shower],
                        rec_slc_reco_shw_dir_z[idx_Shower]);
      //==== Position
      shw.SetPosition( rec_slc_reco_shw_start_x[idx_Shower],
                       rec_slc_reco_shw_start_y[idx_Shower],
                       rec_slc_reco_shw_start_z[idx_Shower],
                       rec_slc_reco_shw_end_x[idx_Shower],
                       rec_slc_reco_shw_end_y[idx_Shower],
                       rec_slc_reco_shw_end_z[idx_Shower]);
      //==== Length
      shw.SetLength(rec_slc_reco_shw_len[idx_Shower]);
      //==== dEdX
      if(debugLevel>=2){
        cout << "[AnalyzerCore::GetAllSlices]     (Number of dE/dx of this shower) = " << rec_slc_reco_shw_dEdx__length[idx_Shower] << endl;
        cout << "[AnalyzerCore::GetAllSlices]     rec_slc_reco_shw_dEdx_plane0[idx_Shower] = " << rec_slc_reco_shw_dEdx_plane0[idx_Shower] << endl;
        cout << "[AnalyzerCore::GetAllSlices]     rec_slc_reco_shw_dEdx_plane1[idx_Shower] = " << rec_slc_reco_shw_dEdx_plane1[idx_Shower] << endl;
        cout << "[AnalyzerCore::GetAllSlices]     rec_slc_reco_shw_dEdx_plane2[idx_Shower] = " << rec_slc_reco_shw_dEdx_plane2[idx_Shower] << endl;
      }
      //==== 1st rec_slc_reco_shw_dEdx = rec_slc_reco_shw_dEdx_plane0
      //==== 2nd rec_slc_reco_shw_dEdx = rec_slc_reco_shw_dEdx_plane1
      //==== 3rd rec_slc_reco_shw_dEdx = rec_slc_reco_shw_dEdx_plane2
      /*
      for(ULong64_t i_shwdedx=0; i_shwdedx<rec_slc_reco_shw_dEdx__length[idx_Shower]; i_shwdedx++,idx_ShowerdEdX++){
        cout << "[AnalyzerCore::GetAllSlices]       " << i_shwdedx << " th dEdx = " << rec_slc_reco_shw_dEdx[idx_ShowerdEdX] << endl;
      }
      */
      shw.SetdEdx(rec_slc_reco_shw_dEdx_plane0[idx_Shower],
                  rec_slc_reco_shw_dEdx_plane1[idx_Shower],
                  rec_slc_reco_shw_dEdx_plane2[idx_Shower]);
      //==== Energy
      shw.SetEnergy(rec_slc_reco_shw_energy_plane0[idx_Shower],
                    rec_slc_reco_shw_energy_plane1[idx_Shower],
                    rec_slc_reco_shw_energy_plane2[idx_Shower]);

      shws.push_back(shw);

    }
    sl.SetShowers(shws);

    //==== Slice properties
    sl.SetNuScore(rec_slc_nu_score[i_sl]);
    sl.SetFlashMatching(rec_slc_fmatch_present[i_sl], rec_slc_fmatch_score[i_sl], rec_slc_fmatch_time[i_sl], rec_slc_fmatch_pe[i_sl]);
    sl.SetIsClearCosmic(rec_slc_is_clear_cosmic[i_sl]);

    out.push_back(sl);
  }

  return out;

}

//==== Attach the historams to ai different direcotry, not outfile
//==== We will write these histograms in WriteHist() to outfile
void AnalyzerCore::SwitchToTempDir(){

  gROOT->cd();
  TDirectory *tempDir = NULL;
  int counter = 0;
  while (!tempDir) {
    //==== First, let's find a directory name that doesn't exist yet
    std::stringstream dirname;
    dirname << "AnalyzerCore" << counter;
    if (gROOT->GetDirectory((dirname.str()).c_str())) {
      ++counter;
      continue;
    }
    //==== Let's try to make this directory
    tempDir = gROOT->mkdir((dirname.str()).c_str());
  }
  tempDir->cd();

}

void AnalyzerCore::SetOutfilePath(TString outname){
  outfile = new TFile(outname,"RECREATE");
};

bool AnalyzerCore::HasFlag(TString flag){

  //cout << "[AnalyzerCore::HasFlag] Userflags.size() = " << Userflags.size() << endl;
  //for(unsigned int i=0; i<Userflags.size(); i++){
  //  cout << "[AnalyzerCore::HasFlag] " << Userflags.at(i) << endl;
  //}
  
  return std::find(Userflags.begin(), Userflags.end(), flag) != Userflags.end();

}

TH1D* AnalyzerCore::GetHist1D(TString histname){

  TH1D *h = NULL;
  std::map<TString, TH1D*>::iterator mapit = maphist_TH1D.find(histname);
  if(mapit != maphist_TH1D.end()) return mapit->second;

  return h;

}

TH2D* AnalyzerCore::GetHist2D(TString histname){

  TH2D *h = NULL;
  std::map<TString, TH2D*>::iterator mapit = maphist_TH2D.find(histname);
  if(mapit != maphist_TH2D.end()) return mapit->second;

  return h;

}

TH3D* AnalyzerCore::GetHist3D(TString histname){
  
  TH3D *h = NULL;
  std::map<TString, TH3D*>::iterator mapit = maphist_TH3D.find(histname);
  if(mapit != maphist_TH3D.end()) return mapit->second;
  
  return h;
  
}


void AnalyzerCore::FillHist(TString histname, double value, double weight, int n_bin, double x_min, double x_max){

  TH1D *this_hist = GetHist1D(histname);
  if( !this_hist ){
    this_hist = new TH1D(histname, "", n_bin, x_min, x_max);
    this_hist->SetDirectory(NULL);
    maphist_TH1D[histname] = this_hist;
  }

  this_hist->Fill(value, weight);

}

void AnalyzerCore::FillHist(TString histname, double value, double weight, int n_bin, double *xbins){

  TH1D *this_hist = GetHist1D(histname);
  if( !this_hist ){
    this_hist = new TH1D(histname, "", n_bin, xbins);
    this_hist->SetDirectory(NULL);
    maphist_TH1D[histname] = this_hist;
  }

  this_hist->Fill(value, weight);

}

void AnalyzerCore::FillHist(TString histname,
                double value_x, double value_y,
                double weight,
                int n_binx, double x_min, double x_max,
                int n_biny, double y_min, double y_max){

  TH2D *this_hist = GetHist2D(histname);
  if( !this_hist ){
    this_hist = new TH2D(histname, "", n_binx, x_min, x_max, n_biny, y_min, y_max);
    this_hist->SetDirectory(NULL);
    maphist_TH2D[histname] = this_hist;
  }

  this_hist->Fill(value_x, value_y, weight);

}

void AnalyzerCore::FillHist(TString histname,
                double value_x, double value_y,
                double weight,
                int n_binx, double *xbins,
                int n_biny, double *ybins){

  TH2D *this_hist = GetHist2D(histname);
  if( !this_hist ){
    this_hist = new TH2D(histname, "", n_binx, xbins, n_biny, ybins);
    this_hist->SetDirectory(NULL);
    maphist_TH2D[histname] = this_hist;
  }

  this_hist->Fill(value_x, value_y, weight);

}

void AnalyzerCore::FillHist(TString histname,
          double value_x, double value_y, double value_z,
          double weight,
          int n_binx, double x_min, double x_max,
          int n_biny, double y_min, double y_max,
          int n_binz, double z_min, double z_max){
  
  TH3D *this_hist = GetHist3D(histname);
  if( !this_hist ){
    this_hist = new TH3D(histname, "", n_binx, x_min, x_max, n_biny, y_min, y_max, n_binz, z_min, z_max);
    this_hist->SetDirectory(NULL);
    maphist_TH3D[histname] = this_hist;
  }
  
  this_hist->Fill(value_x, value_y, value_z, weight);
  
}

void AnalyzerCore::FillHist(TString histname,
          double value_x, double value_y, double value_z,
          double weight,
          int n_binx, double *xbins,
          int n_biny, double *ybins,
          int n_binz, double *zbins){
  
  TH3D *this_hist = GetHist3D(histname);
  if( !this_hist ){
    this_hist = new TH3D(histname, "", n_binx, xbins, n_biny, ybins, n_binz, zbins);
    this_hist->SetDirectory(NULL);
    maphist_TH3D[histname] = this_hist;
  }
  
  this_hist->Fill(value_x, value_y, value_z, weight);
  
}

void AnalyzerCore::WriteHist(){

  outfile->cd();
  for(std::map< TString, TH1D* >::iterator mapit = maphist_TH1D.begin(); mapit!=maphist_TH1D.end(); mapit++){
    TString this_fullname=mapit->second->GetName();
    TString this_name=this_fullname(this_fullname.Last('/')+1,this_fullname.Length());
    TString this_suffix=this_fullname(0,this_fullname.Last('/'));
    TDirectory *dir = outfile->GetDirectory(this_suffix);
    if(!dir){
      outfile->mkdir(this_suffix);
    }
    outfile->cd(this_suffix);
    mapit->second->Write(this_name);
    outfile->cd();
  }
  for(std::map< TString, TH2D* >::iterator mapit = maphist_TH2D.begin(); mapit!=maphist_TH2D.end(); mapit++){
    TString this_fullname=mapit->second->GetName();
    TString this_name=this_fullname(this_fullname.Last('/')+1,this_fullname.Length());
    TString this_suffix=this_fullname(0,this_fullname.Last('/'));
    TDirectory *dir = outfile->GetDirectory(this_suffix);
    if(!dir){
      outfile->mkdir(this_suffix);
    }
    outfile->cd(this_suffix);
    mapit->second->Write(this_name);
    outfile->cd();
  }
  for(std::map< TString, TH3D* >::iterator mapit = maphist_TH3D.begin(); mapit!=maphist_TH3D.end(); mapit++){
    TString this_fullname=mapit->second->GetName();
    TString this_name=this_fullname(this_fullname.Last('/')+1,this_fullname.Length());
    TString this_suffix=this_fullname(0,this_fullname.Last('/'));
    TDirectory *dir = outfile->GetDirectory(this_suffix);
    if(!dir){
      outfile->mkdir(this_suffix);
    }
    outfile->cd(this_suffix);
    mapit->second->Write(this_name);
    outfile->cd();
  }

  outfile->cd();

}

