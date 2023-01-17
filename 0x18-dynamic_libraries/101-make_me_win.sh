#!/bin/bash
wget -P /tmp https://github.com/daduam/alx-low_level_programming/raw/master/0x18-dynamic_libraries/randhack.so
export LD_PRELOAD=/tmp/randhack.so
