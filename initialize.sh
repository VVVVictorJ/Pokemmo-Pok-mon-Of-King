#!/bin/bash
mkdir src
mkdir src/lib && mkdir src/lib/include && mkdir src/lib/src
mkdir src/Test && mkdir src/Test/src && touch src/Test/src/test.cpp
mkdir build && mkdir build/lib && mkdir build/bin
touch CMakeLists.txt && touch src/CMakeLists.txt && touch src/Test/CMakeLists.txt && touch src/lib/CMakeLists.txt 
