#pragma once
#include <chrono>
#include <iostream>
namespace ch = std::chrono;

class Timer {
   private:
    using ms = ch::milliseconds;
    ch::time_point<ch::high_resolution_clock> begin;
    const char* title;

   public:
    Timer(const char* title)
        : title{title},
          begin{ch::high_resolution_clock::now()} {
        std::cerr << '[' << title << ']' << '\n';
    }

    ~Timer() {
        std::cerr << '[' << title << ']' << " Time took: " << ch::duration_cast<ms>(ch::high_resolution_clock::now() - begin).count() << "ms\n";
    }
};