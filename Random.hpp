#pragma once
#include <random>

class Random {
   private:
    std::random_device rd;
    std::mt19937 gen;

   public:
    Random() : gen{rd()} {}

    Random(Random&&) = delete;
    Random(const Random&) = delete;
    Random& operator=(const Random&) = delete;

    inline int64_t getRand() {
        std::uniform_int_distribution<> rand;
        return rand(gen);
    }

    inline uint64_t getRand(uint64_t maxN) {
        std::uniform_int_distribution<> rand(uint64_t(0), maxN);
        return rand(gen);
    }

    inline int64_t getRand(int64_t minN, int64_t maxN) {
        std::uniform_int_distribution<> rand(minN, maxN);
        return rand(gen);
    }
};