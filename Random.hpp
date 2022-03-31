#include <random>
namespace Random {
std::random_device rd;
std::mt19937 gen(rd());

static auto GetRand() {
    std::uniform_int_distribution<> rand;
    return rand(gen);
}

static auto GetRand(int maxN) {
    std::uniform_int_distribution<> rand(0, maxN);
    return rand(gen);
}

static auto GetRand(int minN, int maxN) {
    std::uniform_int_distribution<> rand(minN, maxN);
    return rand(gen);
}

}  // namespace Random