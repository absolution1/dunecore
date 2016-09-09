// WiredAdcChannelDataMap.h
//
// David Adams
// September 2016
//
// WiredAdcChannelDataMap is a simple struct that hold a ma of
// AdcChannelDataMaps and a map of larsoft wire containers.
// Both are indexed by name.
//
// It is used to hold intermediate states in data preparation.

#include "dune/DuneInterface/AdcChannelData.h"
#include "lardataobj/RecoBase/Wire.h"

class WiredAdcChannelDataMap {

public:

  typedef std::string Name;
  typedef std::vector<recob::Wire> WireContainer;

  std::map<Name, AdcChannelDataMap> dataMaps;
  std::map<Name, WireContainer*> wires;

};
