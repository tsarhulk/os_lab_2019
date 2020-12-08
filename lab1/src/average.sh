#!/bin/bash

echo "There were $# parameters passed."
sum=0
for param in "$@"
do
sum=$(($sum + $param))
done
echo "Average = $(($sum/$#))"