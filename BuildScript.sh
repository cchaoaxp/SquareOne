#!/bin/bash

ls
echo "Executing $0"

if [[!"hostname"="localhost.localdomain"]]; then
   echo "No match"
   exit 1
fi

