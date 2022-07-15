#!/bin/sh
mkdir $1;
cd $1;
mkdir include src build;
echo "\n\nint main(){}" > main.cpp;

echo "compiler := g++" > Makefile
echo "files := src/*.cpp main.cpp" >> Makefile
echo "flags := -std=c++2b" >> Makefile

echo "default:\n\t\$(compiler) \$(files) \$(flags) -o build/$1" >> Makefile;
echo "debug:\n\t\$(compiler) \$(files) \$(flags) -Og -o build/$1debug" >> Makefile;
echo "opt:\n\t\$(compiler) \$(files) \$(flags) -O3 -o build/$1opt" >> Makefile;

wget -bq -O create.sh https://raw.githubusercontent.com/cheenaze/useful_files/main/create.sh > /dev/null
chmod +x create.sh;