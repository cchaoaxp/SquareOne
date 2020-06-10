#!/bin/bash

ls
echo "Executing $0"
echo "hostname is $HOSTNAME"

if [ $HOSTNAME != "local.localdomain" ]; then
   echo "No match"
   exit 1
fi

