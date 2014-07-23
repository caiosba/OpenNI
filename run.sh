#!/bin/bash
# Compile and run NiViewer
cd Platform/Linux/Build
make && cd - && cd Platform/Linux/Bin/x86-Release && ./NiViewer
cd /home/caiosba/Mestrado/OpenNI
