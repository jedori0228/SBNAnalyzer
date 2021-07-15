#ifndef Slice_h
#define Slice_h

#include "TObject.h"
#include "Vertex.h"
#include "SliceTrack.h"
#include "SliceShower.h"
#include <iostream>

using namespace std;

namespace SBNUR{

  class Slice{

  public:

    //==== Default Constructor with p4
    Slice();
    //==== Copy constructor.
    Slice(const Slice& p);

    //==== Assignment operator uses Slice copy constructor
    Slice& operator=(const Slice& p);

    virtual ~Slice();

    //==== Vertex
    void SetVertex(Vertex v);
    inline Vertex GetVertex() const {return j_Vertex;}

    //==== Track
    void SetTracks(vector<SliceTrack> trks);
    inline vector<SliceTrack> GetTracks() const {return j_Tracks;}
    //====== Track-base variables
    int GetPrimMuonIdx() const;
    int GetPrimTrackInx() const;
    bool isContained() const;

    //==== Shower
    void SetShowers(vector<SliceShower> shws);
    inline vector<SliceShower> GetShowers() const {return j_Showers;}

    //==== NuScore
    void SetNuScore(double ns);
    inline double GetNuScore() const {return j_NuScore;}

    //==== Flash matching
    struct FlashMatching{
      bool Present;
      double Score;
      double Time;
      double Pe;
      FlashMatching(){
        Score = -999;
        Time = -999;
        Pe = -999;
      }
    };
    void SetFlashMatching(Char_t pr, double sc, double time, double pe);
    inline FlashMatching GetFlashMatching() const {return j_flm;}

    //==== IsClearCosmic
    void SetIsClearCosmic(Char_t icc);
    inline bool isClearCosmic() const {return j_IsClearCosmic;}

    //==== Slice selection
    inline bool PassNumuBasicQual() const {
      if(j_Tracks.size()<=0) return false;
      return j_Tracks.at( GetPrimMuonIdx() ).GetLength()>0;
    }
    inline bool PassFlashMatchNumuCut() const {
      //cout << j_flm.Present << "\t" << j_flm.Time << "\t" << j_flm.Score << endl;
      //TODO time is always negative
      return (j_flm.Present) && (j_flm.Time>0 && j_flm.Score>10); // TODO adjustable
    }
    inline bool PassNumuTrackLength() const {
      if(j_Tracks.size()<=0) return false;
      return j_Tracks.at( GetPrimMuonIdx() ).GetLength()>50.;
    }

  private:

    Vertex j_Vertex;
    vector<SliceTrack> j_Tracks;
    vector<SliceShower> j_Showers;
    double j_NuScore;
    FlashMatching j_flm;
    bool j_IsClearCosmic;

    ClassDef(Slice,1);

  };

}

#endif
