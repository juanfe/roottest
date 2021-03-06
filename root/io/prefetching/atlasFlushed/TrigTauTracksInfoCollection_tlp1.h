//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigTauTracksInfoCollection_tlp1_h
#define TrigTauTracksInfoCollection_tlp1_h
class TrigTauTracksInfoCollection_tlp1;

#include "Riostream.h"
#include <vector>
#include "TrigTauTracksInfoCollection_p1.h"
#include "TrigTauTracksInfo_p1.h"
#include "P4PtEtaPhiM_p1.h"

class TrigTauTracksInfoCollection_tlp1 {

public:
// Nested classes declaration.

public:
// Data Members.
   vector<TrigTauTracksInfoCollection_p1> m_trigTauTracksInfoCollectionVec;    //(TrigTauTracksInfoCollection_p1)
   vector<TrigTauTracksInfo_p1>           m_trigTauTracksInfoVec;              //(TrigTauTracksInfo_p1)
   vector<P4PtEtaPhiM_p1>                 m_p4PtEtaPhiM;                       //(P4PtEtaPhiM_p1)

   TrigTauTracksInfoCollection_tlp1();
   TrigTauTracksInfoCollection_tlp1(const TrigTauTracksInfoCollection_tlp1 & );
   virtual ~TrigTauTracksInfoCollection_tlp1();

};
#endif
