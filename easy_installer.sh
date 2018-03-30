#!/usr/bin/env bash
# Novocoin developers 2018
# use this installer to clone-and-compile Novocoin in one line
# supports Ubuntu 16 LTS

sudo apt-get update
yes "" | sudo apt-get install build-essential python-dev gcc-4.9 g++-4.9 git cmake libboost-all-dev
export CXXFLAGS="-std=gnu++11"
git clone https://github.com/techqc/novocoin
cd Novocoin
mkdir build && cd $_
cmake ..
make
