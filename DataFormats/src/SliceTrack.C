#include "SliceTrack.h"

using namespace SBNUR;
using namespace std;

ClassImp(SliceTrack)

SliceTrack::SliceTrack() : TrackBase()
{
  j_bestplane = -999;
  j_TrackID = -999;
  j_chi2pid0_chi2_kaon = -999;
  j_chi2pid0_chi2_muon = -999;
  j_chi2pid0_chi2_pion = -999;
  j_chi2pid0_chi2_proton = -999;
  j_chi2pid0_pida = 0;
  j_chi2pid0_pdg = 0;
  j_chi2pid0_pid_ndof = -999;
  j_chi2pid1_chi2_kaon = -999;
  j_chi2pid1_chi2_muon = -999;
  j_chi2pid1_chi2_pion = -999;
  j_chi2pid1_chi2_proton = -999;
  j_chi2pid1_pida = 0;
  j_chi2pid1_pdg = 0;
  j_chi2pid1_pid_ndof = -999;
  j_chi2pid2_chi2_kaon = -999;
  j_chi2pid2_chi2_muon = -999;
  j_chi2pid2_chi2_pion = -999;
  j_chi2pid2_chi2_proton = -999;
  j_chi2pid2_pida = 0;
  j_chi2pid2_pdg = 0;
  j_chi2pid2_pid_ndof = -999;
  j_ndaughters = -999;
  j_npts = -999;
  j_parent = -999;
  j_parent_is_primary = false;
}

SliceTrack::SliceTrack(const TrackBase& p) : TrackBase(p)
{
  j_bestplane = -999;
  j_TrackID = -999;
  j_chi2pid0_chi2_kaon = -999;
  j_chi2pid0_chi2_muon = -999;
  j_chi2pid0_chi2_pion = -999;
  j_chi2pid0_chi2_proton = -999;
  j_chi2pid0_pida = 0;
  j_chi2pid0_pdg = 0;
  j_chi2pid0_pid_ndof = -999;
  j_chi2pid1_chi2_kaon = -999;
  j_chi2pid1_chi2_muon = -999;
  j_chi2pid1_chi2_pion = -999;
  j_chi2pid1_chi2_proton = -999;
  j_chi2pid1_pida = 0;
  j_chi2pid1_pdg = 0;
  j_chi2pid1_pid_ndof = -999;
  j_chi2pid2_chi2_kaon = -999;
  j_chi2pid2_chi2_muon = -999;
  j_chi2pid2_chi2_pion = -999;
  j_chi2pid2_chi2_proton = -999;
  j_chi2pid2_pida = 0;
  j_chi2pid2_pdg = 0;
  j_chi2pid2_pid_ndof = -999;
  j_ndaughters = -999;
  j_npts = -999;
  j_parent = -999;
  j_parent_is_primary = false;
}


SliceTrack::SliceTrack(const SliceTrack& p) : TrackBase(p)
{
  j_bestplane = p.j_bestplane;
  j_TrackID = p.j_TrackID;
  j_chi2pid0_chi2_kaon = p.j_chi2pid0_chi2_kaon;
  j_chi2pid0_chi2_muon = p.j_chi2pid0_chi2_muon;
  j_chi2pid0_chi2_pion = p.j_chi2pid0_chi2_pion;
  j_chi2pid0_chi2_proton = p.j_chi2pid0_chi2_proton;
  j_chi2pid0_pida = p.j_chi2pid0_pida;
  j_chi2pid0_pdg = p.j_chi2pid0_pdg;
  j_chi2pid0_pid_ndof = p.j_chi2pid0_pid_ndof;
  j_chi2pid1_chi2_kaon = p.j_chi2pid1_chi2_kaon;
  j_chi2pid1_chi2_muon = p.j_chi2pid1_chi2_muon;
  j_chi2pid1_chi2_pion = p.j_chi2pid1_chi2_pion;
  j_chi2pid1_chi2_proton = p.j_chi2pid1_chi2_proton;
  j_chi2pid1_pida = p.j_chi2pid1_pida;
  j_chi2pid1_pdg = p.j_chi2pid1_pdg;
  j_chi2pid1_pid_ndof = p.j_chi2pid1_pid_ndof;
  j_chi2pid2_chi2_kaon = p.j_chi2pid2_chi2_kaon;
  j_chi2pid2_chi2_muon = p.j_chi2pid2_chi2_muon;
  j_chi2pid2_chi2_pion = p.j_chi2pid2_chi2_pion;
  j_chi2pid2_chi2_proton = p.j_chi2pid2_chi2_proton;
  j_chi2pid2_pida = p.j_chi2pid2_pida;
  j_chi2pid2_pdg = p.j_chi2pid2_pdg;
  j_chi2pid2_pid_ndof = p.j_chi2pid2_pid_ndof;
  j_ndaughters = p.j_ndaughters;
  j_npts = p.j_npts;
  j_parent = p.j_parent;
  j_parent_is_primary = p.j_parent_is_primary;
}

SliceTrack::~SliceTrack(){

}

void SliceTrack::SetBestPlane(int bp){
  j_bestplane = bp;
}

void SliceTrack::SetTrackID(int id){
  j_TrackID = id;
}

void SliceTrack::SetChi2Pid0(double chi2_kaon, double chi2_muon, double chi2_pion, double chi2_proton, int pdg, int pid_ndof, double pida){
  j_chi2pid0_chi2_kaon = chi2_kaon;
  j_chi2pid0_chi2_muon = chi2_muon;
  j_chi2pid0_chi2_pion = chi2_pion;
  j_chi2pid0_chi2_proton = chi2_proton;
  j_chi2pid0_pida = pida;
  j_chi2pid0_pdg = pdg;
  j_chi2pid0_pid_ndof = pid_ndof;
}
void SliceTrack::SetChi2Pid1(double chi2_kaon, double chi2_muon, double chi2_pion, double chi2_proton, int pdg, int pid_ndof, double pida){
  j_chi2pid1_chi2_kaon = chi2_kaon;
  j_chi2pid1_chi2_muon = chi2_muon;
  j_chi2pid1_chi2_pion = chi2_pion;
  j_chi2pid1_chi2_proton = chi2_proton;
  j_chi2pid1_pida = pida;
  j_chi2pid1_pdg = pdg;
  j_chi2pid1_pid_ndof = pid_ndof;
}
void SliceTrack::SetChi2Pid2(double chi2_kaon, double chi2_muon, double chi2_pion, double chi2_proton, int pdg, int pid_ndof, double pida){
  j_chi2pid2_chi2_kaon = chi2_kaon;
  j_chi2pid2_chi2_muon = chi2_muon;
  j_chi2pid2_chi2_pion = chi2_pion;
  j_chi2pid2_chi2_proton = chi2_proton;
  j_chi2pid2_pida = pida;
  j_chi2pid2_pdg = pdg;
  j_chi2pid2_pid_ndof = pid_ndof;
}

void SliceTrack::SetFamily(int nd, int npts, int p, Char_t pip){
  j_ndaughters = nd;
  j_npts = npts;
  j_parent = p;
  j_parent_is_primary = pip;
}

void SliceTrack::Print(){

}
