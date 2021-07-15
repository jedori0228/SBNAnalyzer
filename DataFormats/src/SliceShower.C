#include "SliceShower.h"

using namespace SBNUR;
using namespace std;

ClassImp(SliceShower)

SliceShower::SliceShower() : ShowerBase()
{
  j_bestplane = -999;
  j_ShowerID = -999;
  j_ndaughters = -999;
  j_npts = -999;
  j_parent = -999;
  j_parent_is_primary = false;
}

SliceShower::SliceShower(const ShowerBase& p) : ShowerBase(p)
{
  j_bestplane = -999;
  j_ShowerID = -999;
  j_ndaughters = -999;
  j_npts = -999;
  j_parent = -999;
  j_parent_is_primary = false;
}


SliceShower::SliceShower(const SliceShower& p) : ShowerBase(p)
{
  j_bestplane = p.j_bestplane;
  j_ShowerID = p.j_ShowerID;
  j_ndaughters = p.j_ndaughters;
  j_npts = p.j_npts;
  j_parent = p.j_parent;
  j_parent_is_primary = p.j_parent_is_primary;
}

SliceShower::~SliceShower(){

}

void SliceShower::SetBestPlane(int bp){
  j_bestplane = bp;
}

void SliceShower::SetShowerID(int id){
  j_ShowerID = id;
}

void SliceShower::SetFamily(int nd, int npts, int p, Char_t pip){
  j_ndaughters = nd;
  j_npts = npts;
  j_parent = p;
  j_parent_is_primary = pip;
}

void SliceShower::Print(){

}
