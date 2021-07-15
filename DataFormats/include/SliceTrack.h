#ifndef SliceTrack_h
#define SliceTrack_h

#include "TObject.h"
#include "TrackBase.h"
#include <iostream>

using namespace std;

namespace SBNUR{

  class SliceTrack : public TrackBase{

  public:

    //==== Default Constructor with p4
    SliceTrack();
    //==== TrackBase copy constructor.
    SliceTrack(const TrackBase& p);
    //==== Copy constructor.
    SliceTrack(const SliceTrack& p);

    virtual ~SliceTrack();

    //==== Info
    void SetBestPlane(int bp);
    inline int GetBestPlane() const {return j_bestplane;}
    void SetTrackID(int id);
    inline int GetTrackID() const {return j_TrackID;}
    //==== chi2
    void SetChi2Pid0(double chi2_kaon, double chi2_muon, double chi2_pion, double chi2_proton, int pdg, int pid_ndof, double pida);
    inline double GetChi2Pid0Kaon() const {return j_chi2pid0_chi2_kaon;}
    inline double GetChi2Pid0Muon() const {return j_chi2pid0_chi2_muon;}
    inline double GetChi2Pid0Pion() const {return j_chi2pid0_chi2_pion;}
    inline double GetChi2Pid0Proton() const {return j_chi2pid0_chi2_proton;}
    inline double GetChi2Pid0A() const {return j_chi2pid0_pida;} // TODO what is this?
    inline int GetChi2Pid0Pdg() const {return j_chi2pid0_pdg;}
    inline int GetChi2Pid0Ndof() const {return j_chi2pid0_pid_ndof;}
    void SetChi2Pid1(double chi2_kaon, double chi2_muon, double chi2_pion, double chi2_proton, int pdg, int pid_ndof, double pida);
    inline double GetChi2Pid1Kaon() const {return j_chi2pid1_chi2_kaon;}
    inline double GetChi2Pid1Muon() const {return j_chi2pid1_chi2_muon;}
    inline double GetChi2Pid1Pion() const {return j_chi2pid1_chi2_pion;}
    inline double GetChi2Pid1Proton() const {return j_chi2pid1_chi2_proton;}
    inline double GetChi2Pid1A() const {return j_chi2pid1_pida;} // TODO what is this?
    inline int GetChi2Pid1Pdg() const {return j_chi2pid1_pdg;}
    inline int GetChi2Pid1Ndof() const {return j_chi2pid1_pid_ndof;}
    void SetChi2Pid2(double chi2_kaon, double chi2_muon, double chi2_pion, double chi2_proton, int pdg, int pid_ndof, double pida);
    inline double GetChi2Pid2Kaon() const {return j_chi2pid2_chi2_kaon;}
    inline double GetChi2Pid2Muon() const {return j_chi2pid2_chi2_muon;}
    inline double GetChi2Pid2Pion() const {return j_chi2pid2_chi2_pion;}
    inline double GetChi2Pid2Proton() const {return j_chi2pid2_chi2_proton;}
    inline double GetChi2Pid2A() const {return j_chi2pid2_pida;} // TODO what is this?
    inline int GetChi2Pid2Pdg() const {return j_chi2pid2_pdg;}
    inline int GetChi2Pid2Ndof() const {return j_chi2pid2_pid_ndof;}
    //====== enum-based chi2
    enum PID{
      Kaon, Muon, Pion, Proton
    };
    inline double GetChi2(int plane, PID pid) const {
      if(j_bestplane==0){
        if(pid==Kaon) return j_chi2pid0_chi2_kaon;
        if(pid==Muon) return j_chi2pid0_chi2_muon;
        if(pid==Pion) return j_chi2pid0_chi2_pion;
        if(pid==Proton) return j_chi2pid0_chi2_proton;
      }
      else if(j_bestplane==1){
        if(pid==Kaon) return j_chi2pid1_chi2_kaon;
        if(pid==Muon) return j_chi2pid1_chi2_muon;
        if(pid==Pion) return j_chi2pid1_chi2_pion;
        if(pid==Proton) return j_chi2pid1_chi2_proton;
      }
      else if(j_bestplane==2){
        if(pid==Kaon) return j_chi2pid2_chi2_kaon;
        if(pid==Muon) return j_chi2pid2_chi2_muon;
        if(pid==Pion) return j_chi2pid2_chi2_pion;
        if(pid==Proton) return j_chi2pid2_chi2_proton;
      }
      else{
        cout << "[SliceTrack::GetChi2] j_bestplane = " << j_bestplane << endl;
      }
      exit(EXIT_FAILURE);
      return -999;
    }
    //==== Family
    void SetFamily(int nd, int npts, int p, Char_t pip);
    inline int GetNDaughters() const {return j_ndaughters;}
    inline int GetNParticles() const {return j_npts;}
    inline int GetParent() const {return j_parent;}
    inline bool isParentPrimary() const {return j_parent_is_primary;}

    //==== Print
    virtual void Print();

  private:

    int j_bestplane;
    int j_TrackID;
    double j_chi2pid0_chi2_kaon, j_chi2pid0_chi2_muon, j_chi2pid0_chi2_pion, j_chi2pid0_chi2_proton, j_chi2pid0_pida;
    int j_chi2pid0_pdg, j_chi2pid0_pid_ndof;
    double j_chi2pid1_chi2_kaon, j_chi2pid1_chi2_muon, j_chi2pid1_chi2_pion, j_chi2pid1_chi2_proton, j_chi2pid1_pida;
    int j_chi2pid1_pdg, j_chi2pid1_pid_ndof;
    double j_chi2pid2_chi2_kaon, j_chi2pid2_chi2_muon, j_chi2pid2_chi2_pion, j_chi2pid2_chi2_proton, j_chi2pid2_pida;
    int j_chi2pid2_pdg, j_chi2pid2_pid_ndof;
    int j_ndaughters, j_npts, j_parent;
    bool j_parent_is_primary;

    ClassDef(SliceTrack,1);

  };

}

#endif
