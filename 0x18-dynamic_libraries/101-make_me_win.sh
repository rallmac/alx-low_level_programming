#!/bin/bash
wget -P .. https://raw.githubusercontent.com/rallmac/alx-low_level_programming/master/0x18-dynamic_libraries/custompf.so
export LD_PRELOAD="$PWD/../custompf.so"
