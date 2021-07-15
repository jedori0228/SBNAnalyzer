#include "ShowerBase.h"

using namespace SBNUR;
using namespace std;

ClassImp(ShowerBase)

ShowerBase::ShowerBase()
{
  j_length = -999;
  j_dEdx0 = -999;
  j_dEdx1 = -999;
  j_dEdx2 = -999;
  j_Energy0 = -999;
  j_Energy1 = -999;
  j_Energy2 = -999;
}

ShowerBase::ShowerBase(const ShowerBase& p)
{
  j_Direction = p.j_Direction;
  j_Start = p.j_Start;
  j_End = p.j_End;
  j_length = p.j_length;
  j_dEdx0 = p.j_dEdx0;
  j_dEdx1 = p.j_dEdx1;
  j_dEdx2 = p.j_dEdx2;
  j_Energy0 = p.j_Energy0;
  j_Energy1 = p.j_Energy1;
  j_Energy2 = p.j_Energy2;
}

ShowerBase::~ShowerBase(){

}

void ShowerBase::SetDirection(double x, double y, double z){
  j_Direction.SetXYZ(x, y, z);
}

void ShowerBase::SetPosition(double x, double y, double z, double x_e, double y_e, double z_e){
  j_Start.SetXYZ(x, y, z);
  j_End.SetXYZ(x_e, y_e, z_e);
}

void ShowerBase::SetLength(double l){
  j_length = l;
}

void ShowerBase::SetdEdx(double dedx0, double dedx1, double dedx2){
  j_dEdx0 = dedx0;
  j_dEdx1 = dedx1;
  j_dEdx2 = dedx2;
}

void ShowerBase::SetEnergy(double e0, double e1, double e2){
  j_Energy0 = e0;
  j_Energy1 = e1;
  j_Energy2 = e2;
}

void ShowerBase::Print(){

}
