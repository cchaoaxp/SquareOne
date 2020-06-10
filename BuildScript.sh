#!/bin/bash

ls
echo "Executing $0"
echo "hostname is $HOSTNAME"

if [ $HOSTNAME != "localhost.localdomain" ]; then
   echo "No match"
   exit 1
fi

BUILD_DIR=QtBuild
QMAKE=/usr/bin/qmake-qt5
PROJECT_DIR=/home/cchao/SquareOne/SPOF

if [[ ! -d "$BUILD_DIR" ]]; then
   mkdir -m775 $BUILD_DIR
fi

ls

cd $BUILD_DIR
pwd
echo "in QtBuild ?"

ls
$QMAKE $PROJECT_DIR
make
ls

echo "Ending Executing $0"

