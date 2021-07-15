#include "TrackBase.h"

using namespace SBNUR;
using namespace std;

ClassImp(TrackBase)

TrackBase::TrackBase()
{
  j_length = -999;
}

TrackBase::TrackBase(const TrackBase& p)
{
  j_Direction = p.j_Direction;
  j_DirectionEnd = p.j_DirectionEnd;
  j_Start = p.j_Start;
  j_End = p.j_End;
  j_length = p.j_length;
}

TrackBase::~TrackBase(){

}

void TrackBase::SetDirection(double x, double y, double z, double x_e, double y_e, double z_e){
  j_Direction.SetXYZ(x, y, z);
  j_DirectionEnd.SetXYZ(x_e, y_e, z_e);
}

void TrackBase::SetPosition(double x, double y, double z, double x_e, double y_e, double z_e){
  j_Start.SetXYZ(x, y, z);
  j_End.SetXYZ(x_e, y_e, z_e);
}

bool TrackBase::isContained() const {

  double XMargin = 25.;
  double YMargin = 25.;
  double ZMarginUp = 30.;
  double ZMarginDown = 50.;

  if( GetEnd().X() < 0 ){
    return ( !isnan(GetEnd().X()) &&
             ( GetEnd().X() < -71.1 - XMargin && GetEnd().X() > -369.33 + XMargin ) &&
             !isnan(GetEnd().Y()) &&
             ( GetEnd().Y() > -181.7 + YMargin && GetEnd().Y() < 134.8 - YMargin ) &&
             !isnan(GetEnd().Z()) &&
             ( GetEnd().Z() > -895.95 + ZMarginUp && GetEnd().Z() < 895.95 - ZMarginDown ) );
  }
  else{
    return ( !isnan(GetEnd().X()) &&
             ( GetEnd().X() > 71.1 + XMargin && GetEnd().X() < 369.33 - XMargin ) &&
             !isnan(GetEnd().Y()) &&
             ( GetEnd().Y() > -181.7 + YMargin && GetEnd().Y() < 134.8 - YMargin ) &&
             !isnan(GetEnd().Z()) &&
             ( GetEnd().Z() > -895.95 + ZMarginUp && GetEnd().Z() < 895.95 - ZMarginDown ) );
  }

}

void TrackBase::SetLength(double l){
  j_length = l;
}

void TrackBase::Print(){

}
