#!/bin/bash

SCRIPT=`realpath $0`
SCRIPTPATH=`dirname $SCRIPT`

docker run --hostname grupo7-estudo_de_caso --rm -ti -e HOST_USER_ID=$(id -u) -e HOST_USER_GID=$(id -g) -v "$SCRIPTPATH:/home/grupo7" pupin/grupo7-estudo_de_caso