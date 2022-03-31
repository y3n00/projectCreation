#include <chrono>
#include <iostream>
typedef std::chrono::nanoseconds nanosec;

class Timer {
   private:
    std::chrono::time_point<std::chrono::high_resolution_clock> begin;

   public:
    Timer() : begin(std::chrono::high_resolution_clock::now()) {}

    ~Timer() {
        std::chrono::duration<float> dur = std::chrono::high_resolution_clock::now() - begin;
        std::cout << "Time took: " << std::chrono::duration_cast<nanosec>(dur).count() << "ns\n";
    }
};