#!/bin/sh

cd build
echo "start cmake"
wait=`command cmake ..`
echo "start cmake done"
out=`command make -j 4`
echo "make done"
result=`grep failed "$out"`
if [ -n $result ];then 
    out=`command make -j 4`
else
    echo done
fi
cd ..