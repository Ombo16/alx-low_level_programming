#!/bin/bash
gcc -c *.c mylib.a
ar rc liball.a *.o
