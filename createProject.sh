#!/bin/sh

mkdir $1;
cd $1;
mkdir include src build;
echo "\n\nint main(){}" > main.cpp;

echo "cc := g++" > Makefile
echo "src := main.cpp" >> Makefile
echo "exe := -o $1" >> Makefile
echo "libs := " >> Makefile
echo "flags := -std=c++2b \$(libs)" >> Makefile

echo "release:\n\t\$(cc) \$(exe) \$(flags) -O3" >> Makefile
echo "debug:\n\t\$(cc) \$(exe)_dbg \$(flags) -Og" >> Makefile

wget -bq -O create.sh https://raw.githubusercontent.com/y3n00/projectCreation/main/create.sh > /dev/null
chmod +x create.sh;
