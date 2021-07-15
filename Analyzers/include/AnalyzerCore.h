#ifndef AnalyzerCore_h
#define AnalyzerCore_h

#include "TLorentzVector.h"
#include "TString.h"
#include "TMath.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include <sstream>      

#include "SBNNtuple.h"
#include "Spill.h"
#include "Vertex.h"
#include "Slice.h"
#include "TrackBase.h"
#include "SliceTrack.h"
#include "ShowerBase.h"
#include "SliceShower.h"

#define M_Z 91.1876
#define M_W 80.379

using namespace std;
using namespace SBNUR;

class AnalyzerCore: public SBNNtuple {

public:

  AnalyzerCore();
  ~AnalyzerCore();

  virtual void initializeAnalyzer(){

  };

  virtual void executeEvent(){

  };

  //==== Debug
  int debugLevel;

  //==================
  //==== Get objects
  //==================

  // std::sort(muons.begin(), muons.end(), PtComparing);
  //==== ** Recommend you to do the same for other objects (Electron, Jet, FatJet, ...) **

  Spill GetSpill();
  vector<Slice> GetAllSlices();

  //==== Functions
  bool HasFlag(TString flag);

  //==== Histograms

  std::map< TString, TH1D* > maphist_TH1D;
  std::map< TString, TH2D* > maphist_TH2D;
  std::map< TString, TH3D* > maphist_TH3D;

  TH1D* GetHist1D(TString histname);
  TH2D* GetHist2D(TString histname);
  TH3D* GetHist3D(TString histname);

  void FillHist(TString histname, double value, double weight, int n_bin, double x_min, double x_max);
  void FillHist(TString histname, double value, double weight, int n_bin, double *xbins);
  void FillHist(TString histname,
                double value_x, double value_y,
                double weight,
                int n_binx, double x_min, double x_max,
                int n_biny, double y_min, double y_max);
  void FillHist(TString histname,
                double value_x, double value_y,
                double weight,
                int n_binx, double *xbins,
                int n_biny, double *ybins);
  void FillHist(TString histname,
		double value_x, double value_y, double value_z,
		double weight,
		int n_binx, double x_min, double x_max,
		int n_biny, double y_min, double y_max,
		int n_binz, double z_min, double z_max);
  void FillHist(TString histname,
		double value_x, double value_y, double value_z,
		double weight,
		int n_binx, double *xbins,
		int n_biny, double *ybins,
		int n_binz, double *zbins);

  virtual void WriteHist();

  //==== Output rootfile
  void SwitchToTempDir();
  TFile *outfile;
  void SetOutfilePath(TString outname);

};



#endif
