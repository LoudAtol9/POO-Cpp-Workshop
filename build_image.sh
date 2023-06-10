#!/bin/bash

SCRIPT=`realpath $0`
SCRIPTPATH=`dirname $SCRIPT`

docker build --tag "grupo7-estudo_de_caso" -f "$SCRIPTPATH/Dockerfile" "$SCRIPTPATH"