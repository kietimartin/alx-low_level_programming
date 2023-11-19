#!/bin/bash

gcc -c *.c
ar rc liball.o *.o
ranlib liball.a
