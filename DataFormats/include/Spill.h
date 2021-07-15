#ifndef Spill_h
#define Spill_h

#include "TObject.h"
#include "Vertex.h"
#include <iostream>

using namespace std;

namespace SBNUR{

  class Spill{

  public:

    //==== Default Constructor with p4
    Spill();
    //==== Copy constructor.
    Spill(const Spill& p);

    //==== Assignment operator uses Spill copy constructor
    Spill& operator=(const Spill& p);

    virtual ~Spill();

    void SetEventInfo(int r, int sr, int e, double pot);
    inline int Run() const {return j_run;}
    inline int Subrun() const {return j_subrun;}
    inline int Event() const {return j_evt;}
    inline double POT() const {return j_pot;}

  private:

    int j_run, j_subrun, j_evt;
    double j_pot;

    ClassDef(Spill,1);

  };

}

#endif
