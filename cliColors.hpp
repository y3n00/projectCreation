#pragma once
#include <array>
#include <string>
#include <string_view>
#include <type_traits>

enum Colors : uint8_t {
    red = 0,
    orange,
    yellow,
    green,
    cyan,
    blue,
    purple,
    pink,
    brightgreen,
    brightred,
    black,
    gray,
    brightgray,
    white,
    reset
};

class ColorTxt {
   public:
    static inline const std::string SetC(std::string&& str, Colors c) {
        return m_colors[c] + str + m_colors[reset];
    }

    static inline const std::string GetC(Colors color) { return m_colors[color]; }
    static inline const std::string Reset() { return m_colors[reset]; }
    const static auto* get() { return &m_colors; }

   private:
    static const std::array<std::string, 15> m_colors;
};

const std::array<std::string, 15> ColorTxt::m_colors{
    "\e[1;31m", "\e[1;33m",
    "\e[1;93m", "\e[1;32m",
    "\e[1;36m", "\e[1;34m",
    "\e[1;35m", "\e[1;95m",
    "\e[1;92m", "\e[1;91m",
    "\e[1;30m", "\e[1;90m",
    "\e[1;37m", "\e[1;97m",
    "\e[0m"};