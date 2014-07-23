#!/bin/bash
# Compile and run NiViewer
find . -regextype sed -regex ".*\.\(oni\|out\|avi\)" -exec rm {} ";"
cd Platform/Linux/Build
make && cd - && cd Platform/Linux/Bin/x86-Release && ./NiViewer
cd /home/caiosba/Mestrado/OpenNI
