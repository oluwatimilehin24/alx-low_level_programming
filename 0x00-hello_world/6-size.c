#!/bin/bash
gcc -S -masm=intel $CFILE -o ${CFILE//'.C'.S'}
