#!/bin/bash

# given integer , compute their average, rounded to three decimal places.

read x
read y
read z

printf "%.3f" $(echo "scale=4; ($x+$y+$z)/3" | bc)
