#!/bin/bash
wget -P  .. https://raw.githubusercontent.com/JoelALukwe/alx-low_level_programming/master/0x18-dynamic_libraries/tesios.so
export LD_PRELOAD="$PWD/../tesios.so"
