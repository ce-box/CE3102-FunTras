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

if ! [ -d ./FunTras/build/ ]
then
    mkdir build
    echo '[OK] Build directory created'
else
    echo '[OK] /FunTras/build exists on filesystem'
fi

if ! [ -d ./FunTras/lib/ ]
then
    mkdir lib
    echo '[OK] Lib directory created'
else
    echo '[OK] /FunTras/lib exists on filesystem'
fi

# Agregar funtras.hpp 
sudo cp ./src/funtras.hpp /usr/include

# Compilar y crear biblioteca
g++ -Werror -c ./src/funtras.cpp -o ./build/funtras.o
ar cr ./lib/libfuntras.a ./build/funtras.o

exit 0