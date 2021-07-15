#include "ExampleRun.h"

ExampleRun::ExampleRun(){

  SpecificEvent = -1;
  SpecificCryo = -1;
  SpecificTPC = -1;

}

void ExampleRun::initializeAnalyzer(){

  vec_candidateEventNumbers = {
    194, 896, 250, 107, 56, 1345, 1672, 1547, 1549, 1585, 2477, 2496, 2622, 2394, 1945, 1982, 3030, 3570, 2859, 3021, 3399, 3100, 4380, 327, 1368
  };

  cout << "[ExampleRun::initializeAnalyzer] SpecificEvent = " << SpecificEvent << endl;
  cout << "[ExampleRun::initializeAnalyzer] SpecificCryo = " << SpecificCryo << endl;
  cout << "[ExampleRun::initializeAnalyzer] SpecificTPC = " << SpecificTPC << endl;

}

ExampleRun::~ExampleRun(){

}

void ExampleRun::executeEvent(){

  Spill sp = GetSpill();
  FillHist("AllEvent", 0, 1., 1, 0., 1.);
  bool IsCandidateEvent = std::find( vec_candidateEventNumbers.begin(),
                                     vec_candidateEventNumbers.end(),
                                     sp.Event() ) != vec_candidateEventNumbers.end();

  if(SpecificEvent>0){
    if(sp.Event()!=SpecificEvent) return;
  }

  vector<Slice> sls = GetAllSlices();

  std::map<TString, bool> map_event_bool_To_Region;

  if(debugLevel){
    cout << "[ExampleRun::executeEvent] Run = " << sp.Run() << endl;
    cout << "[ExampleRun::executeEvent] Subrun = " << sp.Subrun() << endl;
    cout << "[ExampleRun::executeEvent] Event = " << sp.Event() << endl;
    cout << "[ExampleRun::executeEvent] Number of slices = " << sls.size() << endl;
  }

  for(unsigned int i_sl=0; i_sl<sls.size(); i_sl++){

    std::map<TString, bool> map_slice_bool_To_Region;
    map_slice_bool_To_Region.clear();
    map_slice_bool_To_Region["NoCut"] = true;

    Slice sl = sls.at(i_sl);
    Vertex v  = sl.GetVertex();
    Slice::FlashMatching flm = sl.GetFlashMatching();
    vector<SliceTrack> trks = sl.GetTracks();
    vector<SliceShower> shws = sl.GetShowers();

    if(debugLevel){
      if( ( (v.CryoID()==SpecificCryo) || SpecificCryo==-1 ) &&
          ( (v.TPCID()==SpecificTPC) || SpecificTPC==-1 ) ){
        cout << "[ExampleRun::executeEvent] slice index = " << i_sl << endl;
        cout << "[ExampleRun::executeEvent]   Vertex : ";v.Print();
        cout << "[ExampleRun::executeEvent]   CryoID : " << v.CryoID() << endl;
        cout << "[ExampleRun::executeEvent]   IsClearCosmic = " << sl.isClearCosmic() << endl;
        cout << "[ExampleRun::executeEvent]   Flash matching score = " << flm.Score << endl;
        cout << "[ExampleRun::executeEvent]   Nu score = " << sl.GetNuScore() << endl;
        cout << "[ExampleRun::executeEvent]   Number of Tracks = " << trks.size() << endl;
        for(unsigned int i_trk=0; i_trk<trks.size(); i_trk++){
          SliceTrack trk = trks.at(i_trk);
          cout << "[ExampleRun::executeEvent]     Track index = " << i_trk << endl;
          cout << "[ExampleRun::executeEvent]       ID = " << trk.GetTrackID() << endl;
          cout << "[ExampleRun::executeEvent]       Direction = (" << trk.GetDirection().X() << ", " << trk.GetDirection().Y() << ", " << trk.GetDirection().Z() << ")" << endl;
          cout << "[ExampleRun::executeEvent]       Position start = (" << trk.GetStart().X() << ", " << trk.GetStart().Y() << ", " << trk.GetStart().Z() << ")" << endl;
          cout << "[ExampleRun::executeEvent]       Position end = (" << trk.GetEnd().X() << ", " << trk.GetEnd().Y() << ", " << trk.GetEnd().Z() << ")" << endl;
          cout << "[ExampleRun::executeEvent]       Length = " << trk.GetLength() << endl;
          cout << "[ExampleRun::executeEvent]       BestPlane = " << trk.GetBestPlane() << endl;
          cout << "[ExampleRun::executeEvent]       Kaon chi2 = " << trk.GetChi2(trk.GetBestPlane(), SliceTrack::Kaon) << endl;
          cout << "[ExampleRun::executeEvent]       Muon chi2 = " << trk.GetChi2(trk.GetBestPlane(), SliceTrack::Muon) << endl;
          cout << "[ExampleRun::executeEvent]       Pion chi2 = " << trk.GetChi2(trk.GetBestPlane(), SliceTrack::Pion) << endl;
          cout << "[ExampleRun::executeEvent]       Proton chi2 = " << trk.GetChi2(trk.GetBestPlane(), SliceTrack::Proton) << endl;
          cout << "[ExampleRun::executeEvent]       Number of daughters = " << trk.GetNDaughters() << endl;
          cout << "[ExampleRun::executeEvent]       Number of particles = " << trk.GetNParticles() << endl;
          cout << "[ExampleRun::executeEvent]       Number of parents = " << trk.GetParent() << endl;
        }
        cout << "[ExampleRun::executeEvent]   Number of Showers = " << shws.size() << endl;
        for(unsigned int i_shw=0; i_shw<shws.size(); i_shw++){
          SliceShower shw = shws.at(i_shw);
          cout << "[ExampleRun::executeEvent]     Shower index = " << i_shw << endl;
          cout << "[ExampleRun::executeEvent]       ID = " << shw.GetShowerID() << endl;
          cout << "[ExampleRun::executeEvent]       Direction = (" << shw.GetDirection().X() << ", " << shw.GetDirection().Y() << ", " << shw.GetDirection().Z() << ")" << endl;
          cout << "[ExampleRun::executeEvent]       Position start = (" << shw.GetStart().X() << ", " << shw.GetStart().Y() << ", " << shw.GetStart().Z() << ")" << endl;
          cout << "[ExampleRun::executeEvent]       Position end = (" << shw.GetEnd().X() << ", " << shw.GetEnd().Y() << ", " << shw.GetEnd().Z() << ")" << endl;
          cout << "[ExampleRun::executeEvent]       Length = " << shw.GetLength() << endl; 
          cout << "[ExampleRun::executeEvent]       BestPlane = " << shw.GetBestPlane() << endl;
          cout << "[ExampleRun::executeEvent]       dEdx = " << shw.GetdEdx( shw.GetBestPlane() ) << endl;
          cout << "[ExampleRun::executeEvent]       Energy = " << shw.GetEnergy( shw.GetBestPlane() ) << endl;
        }
      }
      else continue;
    }

    bool isContained = sl.isContained();
    int PrimaryTrackIndx = sl.GetPrimTrackInx();
    double LeadingTrackLength = -999;
    if(debugLevel){
      cout << "[ExampleRun::executeEvent]   Primary tarck index = " << PrimaryTrackIndx << endl;
    }
    if(PrimaryTrackIndx>=0 && PrimaryTrackIndx<trks.size()){
      SliceTrack PrimaryTrack = trks.at(PrimaryTrackIndx);
      LeadingTrackLength = PrimaryTrack.GetLength();
    }

    if(! (sl.isClearCosmic()) ){
      map_slice_bool_To_Region["NotClearCosmic"] = true;
      if( flm.Present && flm.Score<10 ){
        map_slice_bool_To_Region["NotClearCosmic__FlashMatchScoreGT10"] = true;
        if(isContained){
          map_slice_bool_To_Region["NotClearCosmic__FlashMatchScoreGT10__Contained"] = true;
          if(PrimaryTrackIndx>=0){
            map_slice_bool_To_Region["NotClearCosmic__FlashMatchScoreGT10__Contained__LeadingTrackGT50"] = true;
            if( v.IsFiducialVolume() ){
              map_slice_bool_To_Region["NotClearCosmic__FlashMatchScoreGT10__Contained__LeadingTrackGT50__FiducialVolume"] = true;
            }
          } // END LeadingTrackGT50
        } // END if Contained

        else{
          map_slice_bool_To_Region["NotClearCosmic__FlashMatchScoreGT10__Uncontained"] = true;
          if(PrimaryTrackIndx>=0){
            map_slice_bool_To_Region["NotClearCosmic__FlashMatchScoreGT10__Uncontained__LeadingTrackGT100"] = true;
            if( v.IsFiducialVolume() ){
              map_slice_bool_To_Region["NotClearCosmic__FlashMatchScoreGT10__Uncontained__LeadingTrackGT100__FiducialVolume"] = true;
            }
          }

        } // END if Uncontained


      } // END FlashMatchScore
    } // END ClearCosmic

    for(std::map<TString, bool>::iterator it_map = map_slice_bool_To_Region.begin(); it_map != map_slice_bool_To_Region.end(); it_map++){
      if(IsCandidateEvent) map_slice_bool_To_Region["CandidateEvent_"+it_map->first] = true;
    }

    for(std::map<TString, bool>::iterator it_map = map_slice_bool_To_Region.begin(); it_map != map_slice_bool_To_Region.end(); it_map++){

      TString this_region = it_map->first;

     if(debugLevel) cout << "[ExampleRun::executeEvent]   Pass : " << this_region << endl;

      map_event_bool_To_Region[it_map->first] = true;

      FillHist(this_region+"/NSlice_"+this_region, 0, 1., 1, 0., 1.);
      FillHist(this_region+"/FlashMatchingScore_"+this_region, flm.Score, 1., 100, 0., 100.);
      FillHist(this_region+"/NuScore_"+this_region, sl.GetNuScore(), 1., 100, 0., 1.);
      FillHist(this_region+"/Vertex_X_"+this_region, v.X(), 1., 1000, -500., 500.);
      FillHist(this_region+"/Vertex_Y_"+this_region, v.X(), 1., 1000, -500., 500.);
      FillHist(this_region+"/Vertex_Z_"+this_region, v.Z(), 1., 2200, -1100., 1100.);
      FillHist(this_region+"/LeadingTrackLength_"+this_region, LeadingTrackLength, 1., 1000, 0., 1000.);

    }

  } // END Loop slice

  //==== Event variable
  for(std::map<TString, bool>::iterator it_map = map_event_bool_To_Region.begin(); it_map != map_event_bool_To_Region.end(); it_map++){

    TString this_region = it_map->first;
    FillHist(this_region+"/Event_"+this_region, sp.Event(), 1., 5000, 0., 5000.);
  }

}

