/*****************************************************************************
*                                                                            *
*  OpenNI 1.x Alpha                                                          *
*  Copyright (C) 2012 PrimeSense Ltd.                                        *
*                                                                            *
*  This file is part of OpenNI.                                              *
*                                                                            *
*  Licensed under the Apache License, Version 2.0 (the "License");           *
*  you may not use this file except in compliance with the License.          *
*  You may obtain a copy of the License at                                   *
*                                                                            *
*      http://www.apache.org/licenses/LICENSE-2.0                            *
*                                                                            *
*  Unless required by applicable law or agreed to in writing, software       *
*  distributed under the License is distributed on an "AS IS" BASIS,         *
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  *
*  See the License for the specific language governing permissions and       *
*  limitations under the License.                                            *
*                                                                            *
*****************************************************************************/
#ifndef __CAPTURE_H__
#define __CAPTURE_H__

// --------------------------------
// Includes
// --------------------------------
#include "Device.h"

// --------------------------------
// Global Variables
// --------------------------------
extern NodeCodec g_DepthFormat;
extern NodeCodec g_ImageFormat;
extern NodeCodec g_IRFormat;
extern NodeCodec g_AudioFormat;

// --------------------------------
// Function Declarations
// --------------------------------
void captureInit();
void captureBrowse(int);
void captureStart(int nDelay);
void captureRestart(int);
void captureStop(int);
XnStatus captureFrame();
void captureSetDepthFormat(int format);
void captureSetImageFormat(int format);
void captureSetIRFormat(int format);
void captureSetAudioFormat(int format);
const char* captureGetDepthFormatName();
const char* captureGetImageFormatName();
const char* captureGetIRFormatName();
const char* captureGetAudioFormatName();
void captureSingleFrame(int);
bool isCapturing();

void getCaptureMessage(char* pMessage);

void readSocket(void * param);
void saveVideo(void * param);
void saveVideoAndGlasses(void * param);

#endif //__CAPTURE_H__
