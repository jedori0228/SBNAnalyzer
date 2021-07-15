#ifndef SliceShower_h
#define SliceShower_h

#include "TObject.h"
#include "ShowerBase.h"
#include <iostream>

using namespace std;

namespace SBNUR{

  class SliceShower : public ShowerBase{

  public:

    //==== Default Constructor with p4
    SliceShower();
    //==== ShowerBase copy constructor.
    SliceShower(const ShowerBase& p);
    //==== Copy constructor.
    SliceShower(const SliceShower& p);

    virtual ~SliceShower();

    //==== Info
    void SetBestPlane(int bp);
    inline int GetBestPlane() const {return j_bestplane;}
    void SetShowerID(int id);
    inline int GetShowerID() const {return j_ShowerID;}
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
    int j_ShowerID;
    int j_ndaughters, j_npts, j_parent;
    bool j_parent_is_primary;

    ClassDef(SliceShower,1);

  };

}

#endif
