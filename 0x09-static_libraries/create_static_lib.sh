#!/bin/bash
gcc -fpic -c *.c
ar rc liball.a *.o
