#!/bin/sh

if [ ! -d ".temp" ]; then
    mkdir .temp
fi

name=$1
name2=$1".cpt"
name3=".temp/"$1".cpt.dec"
echo $name3

if [ ! -f "$name3" ];then

    ./decrypt $name2
    chmod a+x $name3
    ./$name3
fi

rm $name3   
 
