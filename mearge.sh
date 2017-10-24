#!/bin/bash

#Usage 
#sh mearge.sh resultA.txt resultB.txt


mearge(){
cat $1 | cat $2 
} 
mearge $1 $2 > result.txt
