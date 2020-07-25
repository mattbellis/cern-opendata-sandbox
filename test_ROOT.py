import ROOT

infilename = "root://eospublic.cern.ch//eos/opendata/cms/Run2011A/DoubleMu/AOD/12Oct2013-v1/10000/000D143E-9535-E311-B88B-002618943934.root"

f = TFile.ROOT.Open(infilename)

t = f.Get("Events")

nentries = t.GetEntries()

print(nentries)

for i in range(0,10):

  t.GetEvent(i)




