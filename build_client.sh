#!/bin/bash
echo -e "\nBuilding client.\n"
mkdir build
cd build
cmake ..
make all

