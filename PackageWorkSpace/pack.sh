#!/bin/sh
exe=$1
echo 'Get the exe name:'$exe

Filename="pack-tail.sh"
Destname=$exe'.sh'
cp $Filename $Destname

des=$(pwd)
echo 'Get the Folder name:'$des
deplist=$(ldd $exe | awk '{if (match($3,"/")){printf("%s "),$3}}')
cp $deplist $des

echo 'Running the Program!'
sh $Destname

ResName=$exe'.tar.gz'
tar -czf $ResName ./*
