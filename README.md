OpenNI (Version 1.5.4.0 - May 7th 2012)
=======================================

This fork is intended to work only on Linux and integrated
with Vuzix's augmented reality glasses.

The difference between this code and the original one is that
this one is supposed to save not only a .ONI stream from a Kinect,
but also a video from the augmented reality glasses and the yaw, picth and roll
data that comes from it through a UDP socket.
  
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

Once running, press 'S' to start recording, and then any other key to stop. You'll see three generated files:

* stream.oni (Kinect stream - RGB and depth streams)
* glasses.out (yaw, pitch and roll data from the glasses)
* glasses0.avi (video from the left camera of the glasses)
* glasses1.avi (video from the right camera of the glasses)

Those output files can be used as input files for the [Kinfu](https://github.com/caiosba/MyKinectFusion) project.
