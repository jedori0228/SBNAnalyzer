#include "Slice.h"

using namespace SBNUR;
using namespace std;

ClassImp(Slice)

Slice::Slice() : j_NuScore(-999), j_IsClearCosmic(true)
{
  j_Tracks.clear();
  j_Showers.clear();
}

Slice::Slice(const Slice& p){
  j_Vertex = p.j_Vertex;
  j_Tracks = p.j_Tracks;
  j_Showers = p.j_Showers;
  j_NuScore = p.j_NuScore;
  j_flm = p.j_flm;
  j_IsClearCosmic = p.j_IsClearCosmic;
}

Slice::~Slice(){

}

Slice& Slice::operator=(const Slice& p){
  if(this != &p){
    j_Vertex = p.j_Vertex;
    j_Tracks = p.j_Tracks;
    j_Showers = p.j_Showers;
    j_NuScore = p.j_NuScore;
    j_flm = p.j_flm;
    j_IsClearCosmic = p.j_IsClearCosmic;
  }

  return *this;
}

void Slice::SetVertex(Vertex v){
  j_Vertex = v;
}

void Slice::SetTracks(vector<SliceTrack> trks){
  j_Tracks = trks;
}

int Slice::GetPrimMuonIdx() const {
  if(j_Tracks.size()==0) return -5;
  double best_idx = 0;
  double best_len = -5.0;
  for(unsigned int i_trk=0; i_trk<j_Tracks.size(); i_trk++){
    SliceTrack trk = j_Tracks.at(i_trk);
    //if(trk.GetChi2Pid2Ndof() < 0 ) return -5; // https://github.com/SBNSoftware/sbnana/commit/72e5c90043b66997442c5c14672a4a5c97d4505b#diff-980e9b6dbc1f588886544b46ee290369a8d1227ea9c6a3246145d1e39ca0904f
    if(trk.GetChi2Pid2Ndof() < 0 ) continue;
    bool isMuonLike = trk.GetChi2Pid2Pion() > trk.GetChi2Pid2Muon();
    if( isMuonLike && trk.GetLength()>best_len ){
      best_len = trk.GetLength();
      best_idx = i_trk;
    }
  }
  return best_idx;
}

int Slice::GetPrimTrackInx() const {

  //==== The (dis)qualification of a slice is based upon the track level information.
  float Atslc, Chi2Proton, Chi2Muon, Longest(0);
  bool AtSlice, Contained, MaybeMuonExiting, MaybeMuonContained;
  int PTrackInd(-1);
  for(unsigned int i=0; i<j_Tracks.size(); i++){
    SliceTrack trk = j_Tracks.at(i);
    //cout << "[Slice::GetPrimTrackInx] track index = " << i << endl;
    //==== First we calculate the distance of each track to the slice vertex.
    Atslc = sqrt( pow( j_Vertex.X() - trk.GetStart().X(), 2.0 ) +
                  pow( j_Vertex.Y() - trk.GetStart().Y(), 2.0 ) +
                  pow( j_Vertex.Z() - trk.GetStart().Z(), 2.0 ) );
    //==== We require that the distance of the track from the slice is less than
    //==== 10 cm and that the parent of the track has been marked as the primary.
    AtSlice = ( Atslc < 10.0 && trk.isParentPrimary());
    //cout << "[Slice::GetPrimTrackInx]   Atslc = " << Atslc << ", trk.isParentPrimary() = " << trk.isParentPrimary() << endl;
    if(trk.GetBestPlane() == 0){
      Chi2Proton = trk.GetChi2Pid0Proton();
      Chi2Muon = trk.GetChi2Pid0Muon();
    }
    else if (trk.GetBestPlane() == 1){
      Chi2Proton = trk.GetChi2Pid1Proton();
      Chi2Muon = trk.GetChi2Pid1Muon();
    }
    else{
      Chi2Proton = trk.GetChi2Pid2Proton();
      Chi2Muon = trk.GetChi2Pid2Muon();
    }

    Contained = trk.isContained();

    //cout << "[Slice::GetPrimTrackInx]   Contained = " << Contained << endl;

    MaybeMuonExiting = ( !Contained && trk.GetLength() > 100);
    MaybeMuonContained = ( Contained && Chi2Proton > 60 && Chi2Muon < 30 && trk.GetLength() > 50 );
    //cout << "[Slice::GetPrimTrackInx]   MaybeMuonExiting = " << MaybeMuonExiting << endl;
    //cout << "[Slice::GetPrimTrackInx]   MaybeMuonContained = " << MaybeMuonContained << endl;
    if( AtSlice && ( MaybeMuonExiting || MaybeMuonContained ) && trk.GetLength() > Longest ){
      Longest = trk.GetLength();
      PTrackInd = i;
      //cout << "[Slice::GetPrimTrackInx]   --> Updating primary track; Longest = " << Longest << ", PTrackInd = " << PTrackInd << endl;
    }
  }
  return PTrackInd;
}

bool Slice::isContained() const {

  int Ind = GetPrimTrackInx();
  bool Contained(false);
  if(Ind>=0){
    SliceTrack trk = j_Tracks.at(Ind);
    Contained = trk.isContained();
  }
  return Contained;
}

void Slice::SetShowers(vector<SliceShower> shws){
  j_Showers = shws;
}

void Slice::SetNuScore(double ns){
  j_NuScore = ns;
}

void Slice::SetFlashMatching(Char_t pr, double sc, double time, double pe){
  j_flm.Present = pr;
  if(j_flm.Present){
    j_flm.Score = sc;
    j_flm.Time = time;
    j_flm.Pe = pe;
  }
}

void Slice::SetIsClearCosmic(Char_t icc){
  j_IsClearCosmic = icc;
}
