#ifndef TrackBase_h
#define TrackBase_h

#include "TObject.h"
#include "TVector3.h"
#include <iostream>

using namespace std;

namespace SBNUR{

  class TrackBase{

  public:

    //==== Default Constructor with p4
    TrackBase();
    //==== Copy constructor.
    TrackBase(const TrackBase& p);

    virtual ~TrackBase();

    //==== Direction
    void SetDirection(double x, double y, double z, double x_e, double y_e, double z_e);
    inline TVector3 GetDirection() const {return j_Direction;}
    inline TVector3 GetDirectionEnd() const {return j_DirectionEnd;}
    //==== Position
    void SetPosition(double x, double y, double z, double x_e, double y_e, double z_e);
    inline TVector3 GetStart() const {return j_Start;}
    inline TVector3 GetEnd() const {return j_End;}
    //==== Position-related functions
    bool isContained() const;
    //==== Length
    void SetLength(double l);
    inline double GetLength() const {return j_length;}

    //==== Print
    virtual void Print();

  private:

    TVector3 j_Direction, j_DirectionEnd;
    TVector3 j_Start, j_End;
    double j_length;

    ClassDef(TrackBase,1);

  };

}

#endif
