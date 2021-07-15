#include "Vertex.h"

using namespace SBNUR;
using namespace std;

ClassImp(Vertex)

Vertex::Vertex() : 
TVector3()
{
}

Vertex::Vertex(const TVector3& p) :
TVector3(p)
{
}

Vertex::Vertex(const Vertex& p) :
TVector3(p)
{
}

Vertex::Vertex(double x, double y, double z) :
TVector3(x, y, z)
{
}

Vertex::~Vertex(){

}

bool Vertex::IsFiducialVolume() const {

  double XMargin = 25.;
  double YMargin = 25.;
  double ZMarginUp = 30.;
  double ZMarginDown = 50.;

  return ( ( X() < -71.1 - XMargin && X() > -369.33 + XMargin ) ||
           ( X() >  71.1 + XMargin && X() <  369.33 - XMargin ) ) &&
         !isnan(Y()) &&
         ( Y() > -181.7 + YMargin && Y() < 134.8 - YMargin ) &&
         !isnan(Z()) &&
         ( Z() > -895.95 + ZMarginUp && Z() < 895.95 - ZMarginDown );
}

int Vertex::TPCID() const {


  int out = -1;

  if(CryoID()==0){

    double x_Cryo0_Cathode = (-71.7-369.33)/2.;

    if( -369.33 <= X() && X() <= x_Cryo0_Cathode ){
      if( Z()<0 ) return 0;
      else return 1;
    }
    else if( x_Cryo0_Cathode < X() && X() < -71.7 ){
      if( Z()<0) return 2;
      else return 3;
    }

  }
  else{

    double x_Cryo0_Cathode = (71.7+369.33)/2.;

    if( 71.7 <= X() && X() <= x_Cryo0_Cathode ){
      if( Z()<0 ) return 0;
      else return 1;
    }
    else if( x_Cryo0_Cathode < X() && X() < 369.33 ){
      if( Z()<0) return 2;
      else return 3;
    }

  }

  return out;

}

void Vertex::Print(){
  cout << "[Vertex::Print] (x, y, z) = " << "(" << X() << ", " << Y() << ", " << Z() << ")" << ", TPCID = " << TPCID() << endl;
}
