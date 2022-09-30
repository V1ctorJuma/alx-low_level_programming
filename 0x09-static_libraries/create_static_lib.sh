#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c ./cfiles/*.c
ar -rc liball.a ./ofiles/*.o
