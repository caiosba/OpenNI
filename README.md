OpenNI (Version 1.5.4.0 - May 7th 2012)
=======================================

This fork is intended to work only on Linux and integrated
with Vuzix's augmented reality glasses.

The difference between this code and the original one is that
this one is supposed to save not only a .ONI stream from a Kinect,
but also a video from the augmented reality glasses. This code also
sends a broadcast message through an UDP socket to tell when it started recording.
  
Build Notes on Linux
====================

Requirements:

* GCC 4.x
* Python 2.6+/3.x
* LibUSB 1.0.x
* FreeGLUT3
* JDK 6.0
		   
Hacking OpenNI: Edit files under `Samples/NiViewer`

Building OpenNI: To build the package manually, you can run `make` in the `Platform/Linux/Build` directory.

Running: Just go to `Platform/Linux/Bin/x86-Release` and run `NiViewer`

You can also execute `./run.sh` to compile and run at once.
