#ifndef ShowerBase_h
#define ShowerBase_h

#include "TObject.h"
#include "TVector3.h"
#include <iostream>

using namespace std;

namespace SBNUR{

  class ShowerBase{

  public:

    //==== Default Constructor with p4
    ShowerBase();
    //==== Copy constructor.
    ShowerBase(const ShowerBase& p);

    virtual ~ShowerBase();

    //==== Direction
    void SetDirection(double x, double y, double z);
    inline TVector3 GetDirection() const {return j_Direction;}
    //==== Position
    void SetPosition(double x, double y, double z, double x_e, double y_e, double z_e);
    inline TVector3 GetStart() const {return j_Start;}
    inline TVector3 GetEnd() const {return j_End;}
    //==== Length
    void SetLength(double l);
    inline double GetLength() const {return j_length;}
    //==== dEdX
    void SetdEdx(double dedx0, double dedx1, double dedx2);
    inline double GetdEdx(int i_plane) const {
      if(i_plane==0) return j_dEdx0;
      else if(i_plane==1) return j_dEdx1;
      else if(i_plane==2) return j_dEdx2;
      else{
        cout << "[ShowerBase::GetdEdx] Wrong i_plane = " << i_plane << endl;
        exit(EXIT_FAILURE);
        return -999;
      }
    }
    //==== Energy
    void SetEnergy(double e0, double e1, double e2);
    inline double GetEnergy(int i_plane) const {
      if(i_plane==0) return j_Energy0;
      else if(i_plane==1) return j_Energy1;
      else if(i_plane==2) return j_Energy2;
      else{
        cout << "[ShowerBase::GetEnergy] Wrong i_plane = " << i_plane << endl;
        exit(EXIT_FAILURE);
        return -999;
      }
    }

    //==== Print
    virtual void Print();

  private:

    TVector3 j_Direction;
    TVector3 j_Start, j_End;
    double j_length;
    double j_dEdx0, j_dEdx1, j_dEdx2;
    double j_Energy0, j_Energy1, j_Energy2;

    ClassDef(ShowerBase,1);

  };

}

#endif
