#!/bin/bash
echo -e "#pragma once" > ./include/$1.hpp
echo -e "#include \"../include/$1.hpp\"" > ./src/$1.cpp