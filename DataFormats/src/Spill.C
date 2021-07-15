#include "Spill.h"

using namespace SBNUR;
using namespace std;

ClassImp(Spill)

Spill::Spill(){

}

Spill::Spill(const Spill& p){
  j_run = p.j_run;
  j_subrun = p.j_subrun;
  j_evt = p.j_evt;
  j_pot = p.j_pot;
}

Spill::~Spill(){

}

Spill& Spill::operator=(const Spill& p){
  if(this != &p){
    j_run = p.j_run;
    j_subrun = p.j_subrun;
    j_evt = p.j_evt;
    j_pot = p.j_pot;
  }

  return *this;
}

void Spill::SetEventInfo(int r, int sr, int e, double pot){
  j_run = r;
  j_subrun = sr;
  j_evt = e;
  j_pot = pot;
}
