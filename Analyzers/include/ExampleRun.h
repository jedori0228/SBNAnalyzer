#ifndef ExampleRun_h
#define ExampleRun_h

#include "AnalyzerCore.h"

class ExampleRun : public AnalyzerCore {

public:

  void initializeAnalyzer();

  void executeEvent();

  ExampleRun();
  ~ExampleRun();

  vector<int> vec_candidateEventNumbers;
  int SpecificEvent;
  int SpecificCryo;
  int SpecificTPC;

};



#endif
