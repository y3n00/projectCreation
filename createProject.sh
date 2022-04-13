#!/bin/sh
mkdir $1;
cd $1;
mkdir include src build;

echo "\n\nint main(){}" > main.cpp;
echo "default:\n\tg++ src/*.cpp main.cpp -o build/$1" > Makefile;
echo "debug:\n\tg++ src/*.cpp main.cpp -Og -o build/$1debug" >> Makefile;
echo "opt:\n\tg++ src/*.cpp main.cpp -O3 -o build/$1opt" >> Makefile;

wget -bq -O create.sh https://raw.githubusercontent.com/cheenaze/useful_files/main/create.sh > /dev/null
chmod +x create.sh;