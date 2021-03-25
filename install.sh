#!/bin/sh
#
# NAME: funTras
# VER: 2021.03
# PLAT: linux-64
# LINES: 42


if ! [ -x "$(command -v git)" ]; then
    echo 'Error: g++ is not installed.' >&2
    echo 'Installing g++ ...' >&2
    sudo apt-get install g++
    else
    echo '[OK] g++ already installed.'
fi

cd FunTras

BUILD=./build
if [ ! -d "$BUILD" ]; then
    mkdir build
    echo '[OK] $BUILD directory created'
else
    echo '[OK] $BUILD exists on filesystem'
fi

LIB=./lib
if [ ! -d "$BUILD" ]; then
    mkdir lib
    echo '[OK] $LIB directory created'
else
    echo '[OK] $LIB exists on filesystem'
fi

# Agregar funtras.hpp 
FILE=/usr/include/funtras.hpp
if [ -f "$FILE" ]; then
    echo "[OK] $FILE exists"
    sudo rm /usr/include/funtras.hpp
fi

sudo cp ./src/funtras.hpp /usr/include
echo "[OK] $FILE stored and updated".

# Compilar y crear biblioteca
g++ -Werror -c ./src/funtras.cpp -o ./build/funtras.o
ar cr ./lib/libfuntras.a ./build/funtras.o

exit 0