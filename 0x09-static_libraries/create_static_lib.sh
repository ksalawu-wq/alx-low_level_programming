#!/bin/bash
gcc -Wall -Pedantic -Werror -Wextra -c *.c
ar rcs liball.a *.o
ranlib liball.a
