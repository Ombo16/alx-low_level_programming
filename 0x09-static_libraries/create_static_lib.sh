#!/bin/bash
ar rc mylib.a *.o

gcc -c *.c mylib.a

