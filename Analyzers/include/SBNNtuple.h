#ifndef SBNNtuple_h
#define SBNNtuple_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TString.h>

// Header file for the classes stored in the TTree if any.

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class SBNNtuple {
public :

   TChain          *fChain;   //!pointer to the analyzed TTree or TChain

   SBNNtuple();
   virtual ~SBNNtuple();
   virtual Int_t    GetEntry(Long64_t entry);
   virtual void SetTreeName(TString tname);
   virtual void AddFile(TString filename);

   Long64_t MaxEvent, NSkipEvent;

   std::string AddZeroToTime(int twodigit);
   std::string printcurrunttime();

   virtual void     Init();
   virtual void     Loop();
   virtual void executeEvent();

   vector<TString> Userflags;

   // Declaration of leaf types
   static const Int_t           arrayMaxN = 999;
   Int_t           rec_crt_hits__length; // rec_crt_hits__length ~ arrayMaxN
   Float_t         rec_crt_hits_pe[arrayMaxN];   //[rec.crt_hits..length]
   Int_t           rec_crt_hits_plane[arrayMaxN];   //[rec.crt_hits..length]
   Float_t         rec_crt_hits_position_x[arrayMaxN];   //[rec.crt_hits..length]
   Float_t         rec_crt_hits_position_y[arrayMaxN];   //[rec.crt_hits..length]
   Float_t         rec_crt_hits_position_z[arrayMaxN];   //[rec.crt_hits..length]
   Float_t         rec_crt_hits_position_err_x[arrayMaxN];   //[rec.crt_hits..length]
   Float_t         rec_crt_hits_position_err_y[arrayMaxN];   //[rec.crt_hits..length]
   Float_t         rec_crt_hits_position_err_z[arrayMaxN];   //[rec.crt_hits..length]
   Float_t         rec_crt_hits_time[arrayMaxN];   //[rec.crt_hits..length]
   Short_t         rec_hdr_det;
   UInt_t          rec_hdr_evt;
   Char_t          rec_hdr_first_in_file;
   Char_t          rec_hdr_first_in_subrun;
   UInt_t          rec_hdr_fno;
   Char_t          rec_hdr_ismc;
   Short_t         rec_hdr_mctype;
   UInt_t          rec_hdr_ngenevt;
   Float_t         rec_hdr_pot;
   UInt_t          rec_hdr_run;
   UShort_t        rec_hdr_subevt;
   UInt_t          rec_hdr_subrun;
   Int_t           rec_slc__length;
   Float_t         rec_slc_charge[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_pe[arrayMaxN];   //[rec.slc..length]
   Char_t          rec_slc_fmatch_present[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_score[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_time[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_a_pe[arrayMaxN];   //[rec.slc..length]
   Char_t          rec_slc_fmatch_a_present[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_a_score[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_a_time[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_b_pe[arrayMaxN];   //[rec.slc..length]
   Char_t          rec_slc_fmatch_b_present[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_b_score[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_fmatch_b_time[arrayMaxN];   //[rec.slc..length]
   Char_t          rec_slc_is_clear_cosmic[arrayMaxN];   //[rec.slc..length]
   Int_t           rec_slc_nu_pdg[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_nu_score[arrayMaxN];   //[rec.slc..length]
   ULong64_t       rec_slc_reco_nshw[arrayMaxN];   //[rec.slc..length]
   ULong64_t       rec_slc_reco_ntrk[arrayMaxN];   //[rec.slc..length]
   Int_t           rec_slc_reco_shw__length[arrayMaxN];   //[rec.slc..length]
   Int_t           rec_slc_reco_shw__totarraysize;
   Int_t           rec_slc_reco_shw_ID[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_bestplane[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_bestplane_dEdx[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_bestplane_energy[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_conversion_gap[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_dEdx__length[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_dEdx__totarraysize;
   Float_t         rec_slc_reco_shw_dEdx[arrayMaxN];   //[rec.slc.reco.shw.dEdx..totarraysize]
   Int_t           rec_slc_reco_shw_dEdx__idx[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_dEdx_plane0[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_dEdx_plane1[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_dEdx_plane2[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_daughters__length[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_daughters__totarraysize;
   Int_t           rec_slc_reco_shw_daughters[arrayMaxN];   //[rec.slc.reco.shw.daughters..totarraysize]
   Int_t           rec_slc_reco_shw_daughters__idx[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_density[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_dir_x[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_dir_y[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_dir_z[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_end_x[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_end_y[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_end_z[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_energy__length[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_energy__totarraysize;
   Float_t         rec_slc_reco_shw_energy[arrayMaxN];   //[rec.slc.reco.shw.energy..totarraysize]
   Int_t           rec_slc_reco_shw_energy__idx[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_energy_plane0[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_energy_plane1[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_energy_plane2[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_len[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   UInt_t          rec_slc_reco_shw_nHits_plane0[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   UInt_t          rec_slc_reco_shw_nHits_plane1[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   UInt_t          rec_slc_reco_shw_nHits_plane2[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_open_angle[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_parent[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Char_t          rec_slc_reco_shw_parent_is_primary[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   UInt_t          rec_slc_reco_shw_producer[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_selVars_densityGradient[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_selVars_densityGradientPower[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_selVars_showerResiduals__length[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_selVars_showerResiduals__totarraysize;
   Float_t         rec_slc_reco_shw_selVars_showerResiduals[arrayMaxN];   //[rec.slc.reco.shw.selVars.showerResiduals..totarraysize]
   Int_t           rec_slc_reco_shw_selVars_showerResiduals__idx[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_selVars_trackLength[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_selVars_trackWidth[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_shw_slcID[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_start_x[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_start_y[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Float_t         rec_slc_reco_shw_start_z[arrayMaxN];   //[rec.slc.reco.shw..totarraysize]
   Int_t           rec_slc_reco_trk__length[arrayMaxN];   //[rec.slc..length]
   Int_t           rec_slc_reco_trk__totarraysize;
   Int_t           rec_slc_reco_trk_ID[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Short_t         rec_slc_reco_trk_bestplane[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid0_chi2_kaon[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid0_chi2_muon[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid0_chi2_pion[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid0_chi2_proton[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_chi2pid0_pdg[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_chi2pid0_pid_ndof[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid0_pida[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid1_chi2_kaon[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid1_chi2_muon[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid1_chi2_pion[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid1_chi2_proton[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_chi2pid1_pdg[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_chi2pid1_pid_ndof[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid1_pida[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid2_chi2_kaon[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid2_chi2_muon[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid2_chi2_pion[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid2_chi2_proton[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_chi2pid2_pdg[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_chi2pid2_pid_ndof[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_chi2pid2_pida[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_ndaughters[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   UShort_t        rec_slc_reco_trk_npts[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_parent[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Char_t          rec_slc_reco_trk_parent_is_primary[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_phi[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   UInt_t          rec_slc_reco_trk_producer[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_rangeP_p_muon[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_rangeP_p_pion[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_rangeP_p_proton[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Int_t           rec_slc_reco_trk_slcID[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_dir_x[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_dir_y[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_dir_z[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_dir_end_x[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_dir_end_y[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_dir_end_z[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_end_x[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_end_y[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_end_z[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_len[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_start_x[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_start_y[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_reco_trk_start_z[arrayMaxN];   //[rec.slc.reco.trk..totarraysize]
   Float_t         rec_slc_vertex_x[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_vertex_y[arrayMaxN];   //[rec.slc..length]
   Float_t         rec_slc_vertex_z[arrayMaxN];   //[rec.slc..length]

/*
   Float_t         rec_reco_trk_dir_x[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_dir_y[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_dir_z[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_dir_end_x[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_dir_end_y[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_dir_end_z[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_end_x[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_end_y[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_end_z[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_len[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_start_x[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_start_y[arrayMaxN];   //[rec.reco.trk..length]
   Float_t         rec_reco_trk_start_z[arrayMaxN];   //[rec.reco.trk..length]
*/

   // List of branches
   TBranch        *b_rec_crt_hits__length;   //!
   TBranch        *b_rec_crt_hits_pe;   //!
   TBranch        *b_rec_crt_hits_plane;   //!
   TBranch        *b_rec_crt_hits_position_x;   //!
   TBranch        *b_rec_crt_hits_position_y;   //!
   TBranch        *b_rec_crt_hits_position_z;   //!
   TBranch        *b_rec_crt_hits_position_err_x;   //!
   TBranch        *b_rec_crt_hits_position_err_y;   //!
   TBranch        *b_rec_crt_hits_position_err_z;   //!
   TBranch        *b_rec_crt_hits_time;   //!
   TBranch        *b_rec_hdr_det;   //!
   TBranch        *b_rec_hdr_evt;   //!
   TBranch        *b_rec_hdr_first_in_file;   //!
   TBranch        *b_rec_hdr_first_in_subrun;   //!
   TBranch        *b_rec_hdr_fno;   //!
   TBranch        *b_rec_hdr_ismc;   //!
   TBranch        *b_rec_hdr_mctype;   //!
   TBranch        *b_rec_hdr_ngenevt;   //!
   TBranch        *b_rec_hdr_pot;   //!
   TBranch        *b_rec_hdr_run;   //!
   TBranch        *b_rec_hdr_subevt;   //!
   TBranch        *b_rec_hdr_subrun;   //!
   TBranch        *b_rec_slc__length;   //!
   TBranch        *b_rec_slc_charge;   //!
   TBranch        *b_rec_slc_fmatch_pe;   //!
   TBranch        *b_rec_slc_fmatch_present;   //!
   TBranch        *b_rec_slc_fmatch_score;   //!
   TBranch        *b_rec_slc_fmatch_time;   //!
   TBranch        *b_rec_slc_fmatch_a_pe;   //!
   TBranch        *b_rec_slc_fmatch_a_present;   //!
   TBranch        *b_rec_slc_fmatch_a_score;   //!
   TBranch        *b_rec_slc_fmatch_a_time;   //!
   TBranch        *b_rec_slc_fmatch_b_pe;   //!
   TBranch        *b_rec_slc_fmatch_b_present;   //!
   TBranch        *b_rec_slc_fmatch_b_score;   //!
   TBranch        *b_rec_slc_fmatch_b_time;   //!
   TBranch        *b_rec_slc_is_clear_cosmic;   //!
   TBranch        *b_rec_slc_nu_pdg;   //!
   TBranch        *b_rec_slc_nu_score;   //!
   TBranch        *b_rec_slc_reco_nshw;   //!
   TBranch        *b_rec_slc_reco_ntrk;   //!
   TBranch        *b_rec_slc_reco_shw__length;   //!
   TBranch        *b_rec_slc_reco_shw__totarraysize;   //!
   TBranch        *b_rec_slc_reco_shw_ID;   //!
   TBranch        *b_rec_slc_reco_shw_bestplane;   //!
   TBranch        *b_rec_slc_reco_shw_bestplane_dEdx;   //!
   TBranch        *b_rec_slc_reco_shw_bestplane_energy;   //!
   TBranch        *b_rec_slc_reco_shw_conversion_gap;   //!
   TBranch        *b_rec_slc_reco_shw_dEdx__length;   //!
   TBranch        *b_rec_slc_reco_shw_dEdx__totarraysize;   //!
   TBranch        *b_rec_slc_reco_shw_dEdx;   //!
   TBranch        *b_rec_slc_reco_shw_dEdx__idx;   //!
   TBranch        *b_rec_slc_reco_shw_dEdx_plane0;   //!
   TBranch        *b_rec_slc_reco_shw_dEdx_plane1;   //!
   TBranch        *b_rec_slc_reco_shw_dEdx_plane2;   //!
   TBranch        *b_rec_slc_reco_shw_daughters__length;   //!
   TBranch        *b_rec_slc_reco_shw_daughters__totarraysize;   //!
   TBranch        *b_rec_slc_reco_shw_daughters;   //!
   TBranch        *b_rec_slc_reco_shw_daughters__idx;   //!
   TBranch        *b_rec_slc_reco_shw_density;   //!
   TBranch        *b_rec_slc_reco_shw_dir_x;   //!
   TBranch        *b_rec_slc_reco_shw_dir_y;   //!
   TBranch        *b_rec_slc_reco_shw_dir_z;   //!
   TBranch        *b_rec_slc_reco_shw_end_x;   //!
   TBranch        *b_rec_slc_reco_shw_end_y;   //!
   TBranch        *b_rec_slc_reco_shw_end_z;   //!
   TBranch        *b_rec_slc_reco_shw_energy__length;   //!
   TBranch        *b_rec_slc_reco_shw_energy__totarraysize;   //!
   TBranch        *b_rec_slc_reco_shw_energy;   //!
   TBranch        *b_rec_slc_reco_shw_energy__idx;   //!
   TBranch        *b_rec_slc_reco_shw_energy_plane0;   //!
   TBranch        *b_rec_slc_reco_shw_energy_plane1;   //!
   TBranch        *b_rec_slc_reco_shw_energy_plane2;   //!
   TBranch        *b_rec_slc_reco_shw_len;   //!
   TBranch        *b_rec_slc_reco_shw_nHits_plane0;   //!
   TBranch        *b_rec_slc_reco_shw_nHits_plane1;   //!
   TBranch        *b_rec_slc_reco_shw_nHits_plane2;   //!
   TBranch        *b_rec_slc_reco_shw_open_angle;   //!
   TBranch        *b_rec_slc_reco_shw_parent;   //!
   TBranch        *b_rec_slc_reco_shw_parent_is_primary;   //!
   TBranch        *b_rec_slc_reco_shw_producer;   //!
   TBranch        *b_rec_slc_reco_shw_selVars_densityGradient;   //!
   TBranch        *b_rec_slc_reco_shw_selVars_densityGradientPower;   //!
   TBranch        *b_rec_slc_reco_shw_selVars_showerResiduals__length;   //!
   TBranch        *b_rec_slc_reco_shw_selVars_showerResiduals__totarraysize;   //!
   TBranch        *b_rec_slc_reco_shw_selVars_showerResiduals;   //!
   TBranch        *b_rec_slc_reco_shw_selVars_showerResiduals__idx;   //!
   TBranch        *b_rec_slc_reco_shw_selVars_trackLength;   //!
   TBranch        *b_rec_slc_reco_shw_selVars_trackWidth;   //!
   TBranch        *b_rec_slc_reco_shw_slcID;   //!
   TBranch        *b_rec_slc_reco_shw_start_x;   //!
   TBranch        *b_rec_slc_reco_shw_start_y;   //!
   TBranch        *b_rec_slc_reco_shw_start_z;   //!
   TBranch        *b_rec_slc_reco_trk__length;   //!
   TBranch        *b_rec_slc_reco_trk__totarraysize;   //!
   TBranch        *b_rec_slc_reco_trk_ID;   //!
   TBranch        *b_rec_slc_reco_trk_bestplane;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid0_chi2_kaon;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid0_chi2_muon;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid0_chi2_pion;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid0_chi2_proton;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid0_pdg;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid0_pid_ndof;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid0_pida;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid1_chi2_kaon;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid1_chi2_muon;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid1_chi2_pion;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid1_chi2_proton;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid1_pdg;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid1_pid_ndof;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid1_pida;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid2_chi2_kaon;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid2_chi2_muon;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid2_chi2_pion;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid2_chi2_proton;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid2_pdg;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid2_pid_ndof;   //!
   TBranch        *b_rec_slc_reco_trk_chi2pid2_pida;   //!
   TBranch        *b_rec_slc_reco_trk_ndaughters;   //!
   TBranch        *b_rec_slc_reco_trk_npts;   //!
   TBranch        *b_rec_slc_reco_trk_parent;   //!
   TBranch        *b_rec_slc_reco_trk_parent_is_primary;   //!
   TBranch        *b_rec_slc_reco_trk_phi;   //!
   TBranch        *b_rec_slc_reco_trk_producer;   //!
   TBranch        *b_rec_slc_reco_trk_rangeP_p_muon;   //!
   TBranch        *b_rec_slc_reco_trk_rangeP_p_pion;   //!
   TBranch        *b_rec_slc_reco_trk_rangeP_p_proton;   //!
   TBranch        *b_rec_slc_reco_trk_slcID;   //!
   TBranch        *b_rec_slc_reco_trk_dir_x;   //!
   TBranch        *b_rec_slc_reco_trk_dir_y;   //!
   TBranch        *b_rec_slc_reco_trk_dir_z;   //!
   TBranch        *b_rec_slc_reco_trk_dir_end_x;   //!
   TBranch        *b_rec_slc_reco_trk_dir_end_y;   //!
   TBranch        *b_rec_slc_reco_trk_dir_end_z;   //!
   TBranch        *b_rec_slc_reco_trk_end_x;   //!
   TBranch        *b_rec_slc_reco_trk_end_y;   //!
   TBranch        *b_rec_slc_reco_trk_end_z;   //!
   TBranch        *b_rec_slc_reco_trk_len;   //!
   TBranch        *b_rec_slc_reco_trk_start_x;   //!
   TBranch        *b_rec_slc_reco_trk_start_y;   //!
   TBranch        *b_rec_slc_reco_trk_start_z;   //!
   TBranch        *b_rec_slc_vertex_x;   //!
   TBranch        *b_rec_slc_vertex_y;   //!
   TBranch        *b_rec_slc_vertex_z;   //!
/*
   TBranch        *b_rec_reco_trk_dir_x;   //!
   TBranch        *b_rec_reco_trk_dir_y;   //!
   TBranch        *b_rec_reco_trk_dir_z;   //!
   TBranch        *b_rec_reco_trk_dir_end_x;   //!
   TBranch        *b_rec_reco_trk_dir_end_y;   //!
   TBranch        *b_rec_reco_trk_dir_end_z;   //!
   TBranch        *b_rec_reco_trk_end_x;   //!
   TBranch        *b_rec_reco_trk_end_y;   //!
   TBranch        *b_rec_reco_trk_end_z;   //!
   TBranch        *b_rec_reco_trk_len;   //!
   TBranch        *b_rec_reco_trk_start_x;   //!
   TBranch        *b_rec_reco_trk_start_y;   //!
   TBranch        *b_rec_reco_trk_start_z;   //!
*/

};

#endif
