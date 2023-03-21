#!/bin/bash
wget -P ../ https://github.com/TeddyMuli/alx-low_level_programming/blob/2eae79d9d8f8a4aa550b139f3b048bf245adfe9f/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=../libhack.so