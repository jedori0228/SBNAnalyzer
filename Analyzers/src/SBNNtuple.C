#define SBNNtuple_cxx
#include "SBNNtuple.h"

void SBNNtuple::executeEvent(){

}

void SBNNtuple::Loop(){

  Long64_t nentries = fChain->GetEntries();
  cout << "[SBNNtuple::Loop()] Total number of events in the tree = " << nentries << endl;

  if(MaxEvent>0){
    nentries = std::min(nentries,MaxEvent);
  }

  cout << "[SBNNtuple::Loop()] Running " << nentries << " events" << endl;

  cout << "[SBNNtuple::Loop()] Event Loop Started " << printcurrunttime() << endl;

  for(Long64_t jentry=0; jentry<nentries;jentry++) {
    fChain->GetEntry(jentry);
    executeEvent();
  }

  cout << "[SBNNtuple::Loop()] LOOP END " << printcurrunttime() << endl;

}

SBNNtuple::SBNNtuple(){

}

SBNNtuple::~SBNNtuple(){
  if (!fChain) return;
  delete fChain->GetCurrentFile();
  cout << "[SBNNtuple::~SBNNtuple] JOB FINISHED " << printcurrunttime() << endl;
}

void SBNNtuple::SetTreeName(TString tname){
  cout << "[SBNNtuple::SetTreeName] Setting tree name to : " << tname << endl;
  fChain = new TChain(tname);
}

void SBNNtuple::AddFile(TString filename){
  cout << "[SBNNtuple::AddFile] Adding : " << filename << endl;
  fChain->Add(filename);
}

Int_t SBNNtuple::GetEntry(Long64_t entry){
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}

std::string SBNNtuple::AddZeroToTime(int twodigit){
  if(twodigit<10){
	  return "0"+std::to_string(twodigit);
  }
  else{
	  return std::to_string(twodigit);
  }
}
std::string SBNNtuple::printcurrunttime(){
  std::stringstream out;
  TDatime datime;
  out << datime.GetYear()<<"-"<<AddZeroToTime(datime.GetMonth())<<"-"<<AddZeroToTime(datime.GetDay())<<" "<<AddZeroToTime(datime.GetHour())<<":"<<AddZeroToTime(datime.GetMinute())<<":"<<AddZeroToTime(datime.GetSecond());
  return out.str();
}

void SBNNtuple::Init(){

   fChain->SetBranchAddress("rec.crt_hits..length", &rec_crt_hits__length, &b_rec_crt_hits__length);
   fChain->SetBranchAddress("rec.crt_hits.pe", &rec_crt_hits_pe, &b_rec_crt_hits_pe);
   fChain->SetBranchAddress("rec.crt_hits.plane", &rec_crt_hits_plane, &b_rec_crt_hits_plane);
   fChain->SetBranchAddress("rec.crt_hits.position.x", &rec_crt_hits_position_x, &b_rec_crt_hits_position_x);
   fChain->SetBranchAddress("rec.crt_hits.position.y", &rec_crt_hits_position_y, &b_rec_crt_hits_position_y);
   fChain->SetBranchAddress("rec.crt_hits.position.z", &rec_crt_hits_position_z, &b_rec_crt_hits_position_z);
   fChain->SetBranchAddress("rec.crt_hits.position_err.x", &rec_crt_hits_position_err_x, &b_rec_crt_hits_position_err_x);
   fChain->SetBranchAddress("rec.crt_hits.position_err.y", &rec_crt_hits_position_err_y, &b_rec_crt_hits_position_err_y);
   fChain->SetBranchAddress("rec.crt_hits.position_err.z", &rec_crt_hits_position_err_z, &b_rec_crt_hits_position_err_z);
   fChain->SetBranchAddress("rec.crt_hits.time", &rec_crt_hits_time, &b_rec_crt_hits_time);
   fChain->SetBranchAddress("rec.hdr.det", &rec_hdr_det, &b_rec_hdr_det);
   fChain->SetBranchAddress("rec.hdr.evt", &rec_hdr_evt, &b_rec_hdr_evt);
   fChain->SetBranchAddress("rec.hdr.first_in_file", &rec_hdr_first_in_file, &b_rec_hdr_first_in_file);
   fChain->SetBranchAddress("rec.hdr.first_in_subrun", &rec_hdr_first_in_subrun, &b_rec_hdr_first_in_subrun);
   fChain->SetBranchAddress("rec.hdr.fno", &rec_hdr_fno, &b_rec_hdr_fno);
   fChain->SetBranchAddress("rec.hdr.ismc", &rec_hdr_ismc, &b_rec_hdr_ismc);
   fChain->SetBranchAddress("rec.hdr.mctype", &rec_hdr_mctype, &b_rec_hdr_mctype);
   fChain->SetBranchAddress("rec.hdr.ngenevt", &rec_hdr_ngenevt, &b_rec_hdr_ngenevt);
   fChain->SetBranchAddress("rec.hdr.pot", &rec_hdr_pot, &b_rec_hdr_pot);
   fChain->SetBranchAddress("rec.hdr.run", &rec_hdr_run, &b_rec_hdr_run);
   fChain->SetBranchAddress("rec.hdr.subevt", &rec_hdr_subevt, &b_rec_hdr_subevt);
   fChain->SetBranchAddress("rec.hdr.subrun", &rec_hdr_subrun, &b_rec_hdr_subrun);
   fChain->SetBranchAddress("rec.slc..length", &rec_slc__length, &b_rec_slc__length);
   fChain->SetBranchAddress("rec.slc.charge", rec_slc_charge, &b_rec_slc_charge);
   fChain->SetBranchAddress("rec.slc.fmatch.pe", rec_slc_fmatch_pe, &b_rec_slc_fmatch_pe);
   fChain->SetBranchAddress("rec.slc.fmatch.present", rec_slc_fmatch_present, &b_rec_slc_fmatch_present);
   fChain->SetBranchAddress("rec.slc.fmatch.score", rec_slc_fmatch_score, &b_rec_slc_fmatch_score);
   fChain->SetBranchAddress("rec.slc.fmatch.time", rec_slc_fmatch_time, &b_rec_slc_fmatch_time);
   fChain->SetBranchAddress("rec.slc.fmatch_a.pe", rec_slc_fmatch_a_pe, &b_rec_slc_fmatch_a_pe);
   fChain->SetBranchAddress("rec.slc.fmatch_a.present", rec_slc_fmatch_a_present, &b_rec_slc_fmatch_a_present);
   fChain->SetBranchAddress("rec.slc.fmatch_a.score", rec_slc_fmatch_a_score, &b_rec_slc_fmatch_a_score);
   fChain->SetBranchAddress("rec.slc.fmatch_a.time", rec_slc_fmatch_a_time, &b_rec_slc_fmatch_a_time);
   fChain->SetBranchAddress("rec.slc.fmatch_b.pe", rec_slc_fmatch_b_pe, &b_rec_slc_fmatch_b_pe);
   fChain->SetBranchAddress("rec.slc.fmatch_b.present", rec_slc_fmatch_b_present, &b_rec_slc_fmatch_b_present);
   fChain->SetBranchAddress("rec.slc.fmatch_b.score", rec_slc_fmatch_b_score, &b_rec_slc_fmatch_b_score);
   fChain->SetBranchAddress("rec.slc.fmatch_b.time", rec_slc_fmatch_b_time, &b_rec_slc_fmatch_b_time);
   fChain->SetBranchAddress("rec.slc.is_clear_cosmic", rec_slc_is_clear_cosmic, &b_rec_slc_is_clear_cosmic);
   fChain->SetBranchAddress("rec.slc.nu_pdg", rec_slc_nu_pdg, &b_rec_slc_nu_pdg);
   fChain->SetBranchAddress("rec.slc.nu_score", rec_slc_nu_score, &b_rec_slc_nu_score);
   fChain->SetBranchAddress("rec.slc.reco.nshw", rec_slc_reco_nshw, &b_rec_slc_reco_nshw);
   fChain->SetBranchAddress("rec.slc.reco.ntrk", rec_slc_reco_ntrk, &b_rec_slc_reco_ntrk);
   fChain->SetBranchAddress("rec.slc.reco.shw..length", rec_slc_reco_shw__length, &b_rec_slc_reco_shw__length);
   fChain->SetBranchAddress("rec.slc.reco.shw..totarraysize", &rec_slc_reco_shw__totarraysize, &b_rec_slc_reco_shw__totarraysize);
   fChain->SetBranchAddress("rec.slc.reco.shw.ID", &rec_slc_reco_shw_ID, &b_rec_slc_reco_shw_ID);
   fChain->SetBranchAddress("rec.slc.reco.shw.bestplane", &rec_slc_reco_shw_bestplane, &b_rec_slc_reco_shw_bestplane);
   fChain->SetBranchAddress("rec.slc.reco.shw.bestplane_dEdx", &rec_slc_reco_shw_bestplane_dEdx, &b_rec_slc_reco_shw_bestplane_dEdx);
   fChain->SetBranchAddress("rec.slc.reco.shw.bestplane_energy", &rec_slc_reco_shw_bestplane_energy, &b_rec_slc_reco_shw_bestplane_energy);
   fChain->SetBranchAddress("rec.slc.reco.shw.conversion_gap", &rec_slc_reco_shw_conversion_gap, &b_rec_slc_reco_shw_conversion_gap);
   fChain->SetBranchAddress("rec.slc.reco.shw.dEdx..length", &rec_slc_reco_shw_dEdx__length, &b_rec_slc_reco_shw_dEdx__length);
   fChain->SetBranchAddress("rec.slc.reco.shw.dEdx..totarraysize", &rec_slc_reco_shw_dEdx__totarraysize, &b_rec_slc_reco_shw_dEdx__totarraysize);
   fChain->SetBranchAddress("rec.slc.reco.shw.dEdx", &rec_slc_reco_shw_dEdx, &b_rec_slc_reco_shw_dEdx);
   fChain->SetBranchAddress("rec.slc.reco.shw.dEdx..idx", &rec_slc_reco_shw_dEdx__idx, &b_rec_slc_reco_shw_dEdx__idx);
   fChain->SetBranchAddress("rec.slc.reco.shw.dEdx_plane0", &rec_slc_reco_shw_dEdx_plane0, &b_rec_slc_reco_shw_dEdx_plane0);
   fChain->SetBranchAddress("rec.slc.reco.shw.dEdx_plane1", &rec_slc_reco_shw_dEdx_plane1, &b_rec_slc_reco_shw_dEdx_plane1);
   fChain->SetBranchAddress("rec.slc.reco.shw.dEdx_plane2", &rec_slc_reco_shw_dEdx_plane2, &b_rec_slc_reco_shw_dEdx_plane2);
   fChain->SetBranchAddress("rec.slc.reco.shw.daughters..length", &rec_slc_reco_shw_daughters__length, &b_rec_slc_reco_shw_daughters__length);
   fChain->SetBranchAddress("rec.slc.reco.shw.daughters..totarraysize", &rec_slc_reco_shw_daughters__totarraysize, &b_rec_slc_reco_shw_daughters__totarraysize);
   fChain->SetBranchAddress("rec.slc.reco.shw.daughters", &rec_slc_reco_shw_daughters, &b_rec_slc_reco_shw_daughters);
   fChain->SetBranchAddress("rec.slc.reco.shw.daughters..idx", &rec_slc_reco_shw_daughters__idx, &b_rec_slc_reco_shw_daughters__idx);
   fChain->SetBranchAddress("rec.slc.reco.shw.density", &rec_slc_reco_shw_density, &b_rec_slc_reco_shw_density);
   fChain->SetBranchAddress("rec.slc.reco.shw.dir.x", &rec_slc_reco_shw_dir_x, &b_rec_slc_reco_shw_dir_x);
   fChain->SetBranchAddress("rec.slc.reco.shw.dir.y", &rec_slc_reco_shw_dir_y, &b_rec_slc_reco_shw_dir_y);
   fChain->SetBranchAddress("rec.slc.reco.shw.dir.z", &rec_slc_reco_shw_dir_z, &b_rec_slc_reco_shw_dir_z);
   fChain->SetBranchAddress("rec.slc.reco.shw.end.x", &rec_slc_reco_shw_end_x, &b_rec_slc_reco_shw_end_x);
   fChain->SetBranchAddress("rec.slc.reco.shw.end.y", &rec_slc_reco_shw_end_y, &b_rec_slc_reco_shw_end_y);
   fChain->SetBranchAddress("rec.slc.reco.shw.end.z", &rec_slc_reco_shw_end_z, &b_rec_slc_reco_shw_end_z);
   fChain->SetBranchAddress("rec.slc.reco.shw.energy..length", &rec_slc_reco_shw_energy__length, &b_rec_slc_reco_shw_energy__length);
   fChain->SetBranchAddress("rec.slc.reco.shw.energy..totarraysize", &rec_slc_reco_shw_energy__totarraysize, &b_rec_slc_reco_shw_energy__totarraysize);
   fChain->SetBranchAddress("rec.slc.reco.shw.energy", &rec_slc_reco_shw_energy, &b_rec_slc_reco_shw_energy);
   fChain->SetBranchAddress("rec.slc.reco.shw.energy..idx", &rec_slc_reco_shw_energy__idx, &b_rec_slc_reco_shw_energy__idx);
   fChain->SetBranchAddress("rec.slc.reco.shw.energy_plane0", &rec_slc_reco_shw_energy_plane0, &b_rec_slc_reco_shw_energy_plane0);
   fChain->SetBranchAddress("rec.slc.reco.shw.energy_plane1", &rec_slc_reco_shw_energy_plane1, &b_rec_slc_reco_shw_energy_plane1);
   fChain->SetBranchAddress("rec.slc.reco.shw.energy_plane2", &rec_slc_reco_shw_energy_plane2, &b_rec_slc_reco_shw_energy_plane2);
   fChain->SetBranchAddress("rec.slc.reco.shw.len", &rec_slc_reco_shw_len, &b_rec_slc_reco_shw_len);
   fChain->SetBranchAddress("rec.slc.reco.shw.nHits_plane0", &rec_slc_reco_shw_nHits_plane0, &b_rec_slc_reco_shw_nHits_plane0);
   fChain->SetBranchAddress("rec.slc.reco.shw.nHits_plane1", &rec_slc_reco_shw_nHits_plane1, &b_rec_slc_reco_shw_nHits_plane1);
   fChain->SetBranchAddress("rec.slc.reco.shw.nHits_plane2", &rec_slc_reco_shw_nHits_plane2, &b_rec_slc_reco_shw_nHits_plane2);
   fChain->SetBranchAddress("rec.slc.reco.shw.open_angle", &rec_slc_reco_shw_open_angle, &b_rec_slc_reco_shw_open_angle);
   fChain->SetBranchAddress("rec.slc.reco.shw.parent", &rec_slc_reco_shw_parent, &b_rec_slc_reco_shw_parent);
   fChain->SetBranchAddress("rec.slc.reco.shw.parent_is_primary", &rec_slc_reco_shw_parent_is_primary, &b_rec_slc_reco_shw_parent_is_primary);
   fChain->SetBranchAddress("rec.slc.reco.shw.producer", &rec_slc_reco_shw_producer, &b_rec_slc_reco_shw_producer);
   fChain->SetBranchAddress("rec.slc.reco.shw.selVars.densityGradient", &rec_slc_reco_shw_selVars_densityGradient, &b_rec_slc_reco_shw_selVars_densityGradient);
   fChain->SetBranchAddress("rec.slc.reco.shw.selVars.densityGradientPower", &rec_slc_reco_shw_selVars_densityGradientPower, &b_rec_slc_reco_shw_selVars_densityGradientPower);
   fChain->SetBranchAddress("rec.slc.reco.shw.selVars.showerResiduals..length", &rec_slc_reco_shw_selVars_showerResiduals__length, &b_rec_slc_reco_shw_selVars_showerResiduals__length);
   fChain->SetBranchAddress("rec.slc.reco.shw.selVars.showerResiduals..totarraysize", &rec_slc_reco_shw_selVars_showerResiduals__totarraysize, &b_rec_slc_reco_shw_selVars_showerResiduals__totarraysize);
   fChain->SetBranchAddress("rec.slc.reco.shw.selVars.showerResiduals", &rec_slc_reco_shw_selVars_showerResiduals, &b_rec_slc_reco_shw_selVars_showerResiduals);
   fChain->SetBranchAddress("rec.slc.reco.shw.selVars.showerResiduals..idx", &rec_slc_reco_shw_selVars_showerResiduals__idx, &b_rec_slc_reco_shw_selVars_showerResiduals__idx);
   fChain->SetBranchAddress("rec.slc.reco.shw.selVars.trackLength", &rec_slc_reco_shw_selVars_trackLength, &b_rec_slc_reco_shw_selVars_trackLength);
   fChain->SetBranchAddress("rec.slc.reco.shw.selVars.trackWidth", &rec_slc_reco_shw_selVars_trackWidth, &b_rec_slc_reco_shw_selVars_trackWidth);
   fChain->SetBranchAddress("rec.slc.reco.shw.slcID", &rec_slc_reco_shw_slcID, &b_rec_slc_reco_shw_slcID);
   fChain->SetBranchAddress("rec.slc.reco.shw.start.x", &rec_slc_reco_shw_start_x, &b_rec_slc_reco_shw_start_x);
   fChain->SetBranchAddress("rec.slc.reco.shw.start.y", &rec_slc_reco_shw_start_y, &b_rec_slc_reco_shw_start_y);
   fChain->SetBranchAddress("rec.slc.reco.shw.start.z", &rec_slc_reco_shw_start_z, &b_rec_slc_reco_shw_start_z);
   fChain->SetBranchAddress("rec.slc.reco.trk..length", rec_slc_reco_trk__length, &b_rec_slc_reco_trk__length);
   fChain->SetBranchAddress("rec.slc.reco.trk..totarraysize", &rec_slc_reco_trk__totarraysize, &b_rec_slc_reco_trk__totarraysize);
   fChain->SetBranchAddress("rec.slc.reco.trk.ID", rec_slc_reco_trk_ID, &b_rec_slc_reco_trk_ID);
   fChain->SetBranchAddress("rec.slc.reco.trk.bestplane", rec_slc_reco_trk_bestplane, &b_rec_slc_reco_trk_bestplane);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid0.chi2_kaon", rec_slc_reco_trk_chi2pid0_chi2_kaon, &b_rec_slc_reco_trk_chi2pid0_chi2_kaon);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid0.chi2_muon", rec_slc_reco_trk_chi2pid0_chi2_muon, &b_rec_slc_reco_trk_chi2pid0_chi2_muon);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid0.chi2_pion", rec_slc_reco_trk_chi2pid0_chi2_pion, &b_rec_slc_reco_trk_chi2pid0_chi2_pion);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid0.chi2_proton", rec_slc_reco_trk_chi2pid0_chi2_proton, &b_rec_slc_reco_trk_chi2pid0_chi2_proton);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid0.pdg", rec_slc_reco_trk_chi2pid0_pdg, &b_rec_slc_reco_trk_chi2pid0_pdg);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid0.pid_ndof", rec_slc_reco_trk_chi2pid0_pid_ndof, &b_rec_slc_reco_trk_chi2pid0_pid_ndof);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid0.pida", rec_slc_reco_trk_chi2pid0_pida, &b_rec_slc_reco_trk_chi2pid0_pida);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid1.chi2_kaon", rec_slc_reco_trk_chi2pid1_chi2_kaon, &b_rec_slc_reco_trk_chi2pid1_chi2_kaon);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid1.chi2_muon", rec_slc_reco_trk_chi2pid1_chi2_muon, &b_rec_slc_reco_trk_chi2pid1_chi2_muon);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid1.chi2_pion", rec_slc_reco_trk_chi2pid1_chi2_pion, &b_rec_slc_reco_trk_chi2pid1_chi2_pion);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid1.chi2_proton", rec_slc_reco_trk_chi2pid1_chi2_proton, &b_rec_slc_reco_trk_chi2pid1_chi2_proton);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid1.pdg", rec_slc_reco_trk_chi2pid1_pdg, &b_rec_slc_reco_trk_chi2pid1_pdg);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid1.pid_ndof", rec_slc_reco_trk_chi2pid1_pid_ndof, &b_rec_slc_reco_trk_chi2pid1_pid_ndof);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid1.pida", rec_slc_reco_trk_chi2pid1_pida, &b_rec_slc_reco_trk_chi2pid1_pida);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid2.chi2_kaon", rec_slc_reco_trk_chi2pid2_chi2_kaon, &b_rec_slc_reco_trk_chi2pid2_chi2_kaon);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid2.chi2_muon", rec_slc_reco_trk_chi2pid2_chi2_muon, &b_rec_slc_reco_trk_chi2pid2_chi2_muon);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid2.chi2_pion", rec_slc_reco_trk_chi2pid2_chi2_pion, &b_rec_slc_reco_trk_chi2pid2_chi2_pion);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid2.chi2_proton", rec_slc_reco_trk_chi2pid2_chi2_proton, &b_rec_slc_reco_trk_chi2pid2_chi2_proton);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid2.pdg", rec_slc_reco_trk_chi2pid2_pdg, &b_rec_slc_reco_trk_chi2pid2_pdg);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid2.pid_ndof", rec_slc_reco_trk_chi2pid2_pid_ndof, &b_rec_slc_reco_trk_chi2pid2_pid_ndof);
   fChain->SetBranchAddress("rec.slc.reco.trk.chi2pid2.pida", rec_slc_reco_trk_chi2pid2_pida, &b_rec_slc_reco_trk_chi2pid2_pida);
   fChain->SetBranchAddress("rec.slc.reco.trk.ndaughters", rec_slc_reco_trk_ndaughters, &b_rec_slc_reco_trk_ndaughters);
   fChain->SetBranchAddress("rec.slc.reco.trk.npts", rec_slc_reco_trk_npts, &b_rec_slc_reco_trk_npts);
   fChain->SetBranchAddress("rec.slc.reco.trk.parent", rec_slc_reco_trk_parent, &b_rec_slc_reco_trk_parent);
   fChain->SetBranchAddress("rec.slc.reco.trk.parent_is_primary", rec_slc_reco_trk_parent_is_primary, &b_rec_slc_reco_trk_parent_is_primary);
   fChain->SetBranchAddress("rec.slc.reco.trk.phi", rec_slc_reco_trk_phi, &b_rec_slc_reco_trk_phi);
   fChain->SetBranchAddress("rec.slc.reco.trk.producer", rec_slc_reco_trk_producer, &b_rec_slc_reco_trk_producer);
   fChain->SetBranchAddress("rec.slc.reco.trk.rangeP.p_muon", rec_slc_reco_trk_rangeP_p_muon, &b_rec_slc_reco_trk_rangeP_p_muon);
   fChain->SetBranchAddress("rec.slc.reco.trk.rangeP.p_pion", rec_slc_reco_trk_rangeP_p_pion, &b_rec_slc_reco_trk_rangeP_p_pion);
   fChain->SetBranchAddress("rec.slc.reco.trk.rangeP.p_proton", rec_slc_reco_trk_rangeP_p_proton, &b_rec_slc_reco_trk_rangeP_p_proton);
   fChain->SetBranchAddress("rec.slc.reco.trk.slcID", rec_slc_reco_trk_slcID, &b_rec_slc_reco_trk_slcID);
   fChain->SetBranchAddress("rec.slc.reco.trk.dir.x", rec_slc_reco_trk_dir_x, &b_rec_slc_reco_trk_dir_x);
   fChain->SetBranchAddress("rec.slc.reco.trk.dir.y", rec_slc_reco_trk_dir_y, &b_rec_slc_reco_trk_dir_y);
   fChain->SetBranchAddress("rec.slc.reco.trk.dir.z", rec_slc_reco_trk_dir_z, &b_rec_slc_reco_trk_dir_z);
   fChain->SetBranchAddress("rec.slc.reco.trk.dir_end.x", rec_slc_reco_trk_dir_end_x, &b_rec_slc_reco_trk_dir_end_x);
   fChain->SetBranchAddress("rec.slc.reco.trk.dir_end.y", rec_slc_reco_trk_dir_end_y, &b_rec_slc_reco_trk_dir_end_y);
   fChain->SetBranchAddress("rec.slc.reco.trk.dir_end.z", rec_slc_reco_trk_dir_end_z, &b_rec_slc_reco_trk_dir_end_z);
   fChain->SetBranchAddress("rec.slc.reco.trk.end.x", rec_slc_reco_trk_end_x, &b_rec_slc_reco_trk_end_x);
   fChain->SetBranchAddress("rec.slc.reco.trk.end.y", rec_slc_reco_trk_end_y, &b_rec_slc_reco_trk_end_y);
   fChain->SetBranchAddress("rec.slc.reco.trk.end.z", rec_slc_reco_trk_end_z, &b_rec_slc_reco_trk_end_z);
   fChain->SetBranchAddress("rec.slc.reco.trk.len", rec_slc_reco_trk_len, &b_rec_slc_reco_trk_len);
   fChain->SetBranchAddress("rec.slc.reco.trk.start.x", rec_slc_reco_trk_start_x, &b_rec_slc_reco_trk_start_x);
   fChain->SetBranchAddress("rec.slc.reco.trk.start.y", rec_slc_reco_trk_start_y, &b_rec_slc_reco_trk_start_y);
   fChain->SetBranchAddress("rec.slc.reco.trk.start.z", rec_slc_reco_trk_start_z, &b_rec_slc_reco_trk_start_z);
   fChain->SetBranchAddress("rec.slc.vertex.x", rec_slc_vertex_x, &b_rec_slc_vertex_x);
   fChain->SetBranchAddress("rec.slc.vertex.y", rec_slc_vertex_y, &b_rec_slc_vertex_y);
   fChain->SetBranchAddress("rec.slc.vertex.z", rec_slc_vertex_z, &b_rec_slc_vertex_z);

/*
   fChain->SetBranchAddress("rec.reco.trk.dir.x", rec_reco_trk_dir_x, &b_rec_reco_trk_dir_x);
   fChain->SetBranchAddress("rec.reco.trk.dir.y", rec_reco_trk_dir_y, &b_rec_reco_trk_dir_y);
   fChain->SetBranchAddress("rec.reco.trk.dir.z", rec_reco_trk_dir_z, &b_rec_reco_trk_dir_z);
   fChain->SetBranchAddress("rec.reco.trk.dir_end.x", rec_reco_trk_dir_end_x, &b_rec_reco_trk_dir_end_x);
   fChain->SetBranchAddress("rec.reco.trk.dir_end.y", rec_reco_trk_dir_end_y, &b_rec_reco_trk_dir_end_y);
   fChain->SetBranchAddress("rec.reco.trk.dir_end.z", rec_reco_trk_dir_end_z, &b_rec_reco_trk_dir_end_z);
   fChain->SetBranchAddress("rec.reco.trk.end.x", rec_reco_trk_end_x, &b_rec_reco_trk_end_x);
   fChain->SetBranchAddress("rec.reco.trk.end.y", rec_reco_trk_end_y, &b_rec_reco_trk_end_y);
   fChain->SetBranchAddress("rec.reco.trk.end.z", rec_reco_trk_end_z, &b_rec_reco_trk_end_z);
   fChain->SetBranchAddress("rec.reco.trk.len", rec_reco_trk_len, &b_rec_reco_trk_len);
   fChain->SetBranchAddress("rec.reco.trk.start.x", rec_reco_trk_start_x, &b_rec_reco_trk_start_x);
   fChain->SetBranchAddress("rec.reco.trk.start.y", rec_reco_trk_start_y, &b_rec_reco_trk_start_y);
   fChain->SetBranchAddress("rec.reco.trk.start.z", rec_reco_trk_start_z, &b_rec_reco_trk_start_z);
*/

}
