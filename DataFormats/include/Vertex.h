#ifndef Vertex_h
#define Vertex_h

#include "TObject.h"
#include "TVector3.h"
#include <iostream>

using namespace std;

namespace SBNUR{

  class Vertex : public TVector3{

  public:

    //==== Default Constructor with p4
    Vertex();
    //==== TVector3 copy constructor.
    Vertex(const TVector3& p);
    //==== Copy constructor.
    Vertex(const Vertex& p);
    //==== Construct from components
    Vertex(double x, double y, double z);

    virtual ~Vertex();

    //==== Detector ID
    inline int CryoID() const {
      if(X()<0) return 0;
      else return 1;
    }
    int TPCID() const;

    //==== Fiducial volume
    bool IsFiducialVolume() const;

    //==== Print
    virtual void Print();

  private:

    ClassDef(Vertex,1);

  };

}

#endif
