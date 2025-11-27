# OpenCV Camera Capture Project

A C++ application using OpenCV for real-time camera capture and image processing.

## Features
- Real-time camera capture from default camera
- Save frames with 's' key
- Exit with 'q' key
- Image processing demonstration

## Requirements
- OpenCV 4.12.0
- Visual Studio 2019/2022
- Windows with camera access

## Build Instructions
1. Install OpenCV for Windows
2. Create new Visual Studio Console App project
3. Configure include directories: `C:\opencv\build\include`
4. Configure library directories: `C:\opencv\build\x64\vc16\lib`
5. Link libraries: `opencv_world4120d.lib` (Debug) or `opencv_world4120.lib` (Release)
6. Copy DLL to output directory
7. Build and run

## Usage
- Press 's' to save current frame as JPG
- Press 'q' to quit application
