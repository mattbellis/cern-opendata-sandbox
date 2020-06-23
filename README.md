# opendata-sandbox
Playing around with the open data stuff. 


Open docker with

```
docker run -it --net=host --env="DISPLAY" --volume="$HOME/.Xauthority:/root/.Xauthority:rw" cmsopendata/cmssw_5_3_32 /bin/bash

cmsenv

root -l root://eospublic.cern.ch//eos/opendata/cms/Run2011A/DoubleMu/AOD/12Oct2013-v1/10000/000D143E-9535-E311-B88B-002618943934.root
```
