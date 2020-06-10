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
PROJECT_DIR=../SPOF

if [[ ! -d "$BUILD_DIR" ]]; then
   mkdir -m775 $BUILD_DIR
fi

ls

cd $BUILD_DIR
echo "pwd to QtBuild ?"
pwd

echo "ls SPOF items:"

ls $PROJECT_DIR

$QMAKE $PROJECT_DIR
make
ls

echo "Ending Executing $0"

