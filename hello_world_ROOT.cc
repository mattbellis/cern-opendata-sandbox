#include "TROOT.h"
#include "TTree.h"
#include "TFile.h"
#include "TRandom.h"

#include<cstdio>
#include<cstdlib>
#include<iostream>

// http://physino.xyz/learning/2020/02/11/automate-compilation-of-root-based-c++-program-with-makefile/

// https://root.cern.ch/doc/v610/tree1_8C.html

// setenv LD_LIBRARY_PATH /usr/local/lib/root:/usr/local/lib//usr/lib/x86_64-linux-gnu:/lib/x86_64-linux-gnu/


int main() {

    //create a Tree file tree1.root
    //create the file, the Tree and a few branches
    TFile f("tree1.root","recreate");
    TTree t1("t1","a simple Tree with simple variables");
    Float_t px, py, pz;
    Double_t random;
    Int_t ev;
    t1.Branch("px",&px,"px/F");
    t1.Branch("py",&py,"py/F");
    t1.Branch("pz",&pz,"pz/F");
    t1.Branch("random",&random,"random/D");
    t1.Branch("ev",&ev,"ev/I");
    //fill the tree
    for (Int_t i=0;i<10000;i++) {
        gRandom->Rannor(px,py);
        pz = px*px + py*py;
        random = gRandom->Rndm();
        ev = i;
        t1.Fill();
    }
    //save the Tree header. The file will be automatically closed
    //when going out of the function scope
    t1.Write();

    return 0;
}


