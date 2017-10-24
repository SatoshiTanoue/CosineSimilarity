#!/bin/bash

#Usage 
#sh mearge.sh resultA.txt resultB.txt


mearge(){
cat $1 $2 | sort
} 
mearge $1 $2 > result.txt
