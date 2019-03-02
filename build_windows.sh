#!/usr/bin/env sh
mkdir -p Release-32bit-Windows Release-64bit-Windows
echo "Compiling 32bit Windows Release"
i686-w64-mingw32-g++ src/NamourCounter.cpp -o Release-32bit-Windows/NamourCounter.exe
echo "Compiling 64bit Windows Release"
x86_64-w64-mingw32-g++ src/NamourCounter.cpp -o Release-64bit-Windows/NamourCounter.exe
echo "Compiling success!"

echo "Compressing Release Dirs"
zip Release-32bit-Windows Release-32bit-Windows/*
zip Release-64bit-Windows Release-64bit-Windows/*
echo "Compressing success!"

echo "\n exiting ...\n"
