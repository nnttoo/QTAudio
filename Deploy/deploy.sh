#!/bin/sh

export PATH=/home/anto/Qt/5.9/gcc_64/bin:$PATH
export LD_LIBRARY_PATH=/home/anto/Qt/5.9/gcc_64/lib
export QT_PLUGIN_PATH=/home/anto/Qt/5.9/gcc_64/plugins

APPDIR="./publish/QTAudioTest" 
SOURCEDIR="../QTAudioTest"

./linuxdeployqt-continuous-x86_64.AppImage  $APPDIR  -qmldir=$SOURCEDIR  
