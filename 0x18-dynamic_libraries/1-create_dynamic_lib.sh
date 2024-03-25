#!/bin/bash
gcc -Wall -Wextra -Werror -pendatic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARAY_PATH=.:$LD_LIBRARY_PATH
