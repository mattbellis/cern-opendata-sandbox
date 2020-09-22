import ROOT

import sys

topdir = "root://eospublic.cern.ch//eos/opendata/cms/"

if len(sys.argv)>1:
    topdir += sys.argv[1]

#dire = ROOT.TSystemDirectory("root://eospublic.cern.ch//eos/opendata/cms/","root://eospublic.cern.ch//eos/opendata/cms/")
dire = ROOT.TSystemDirectory(topdir,topdir)

# TList object
files = dire.GetListOfFiles()

# For debugging
files.Print()

print("--------------------------------")
print("Listing the contents of ")
print()
print(topdir)
print("-------")
print()
#print(len(files))

for f in files:
    print(f.GetName())
    #print(f.IsDirectory())



