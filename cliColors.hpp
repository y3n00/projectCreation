#pragma once
namespace colors {
static constexpr unsigned size{13};
static constexpr const char* red{"\e[1;31m"};
static constexpr const char* orange{"\e[1;33m"};
static constexpr const char* yellow{"\e[1;93m"};
static constexpr const char* green{"\e[1;32m"};
static constexpr const char* cyan{"\e[1;36m"};
static constexpr const char* blue{"\e[1;34m"};
static constexpr const char* purple{"\e[1;35m"};
static constexpr const char* pink{"\e[1;95m"};
static constexpr const char* white{"\e[1;97m"};
static constexpr const char* gray{"\e[1;90m"};
static constexpr const char* black{"\e[1;30m"};
static constexpr const char* brightgray{"\e[1;37m"};
static constexpr const char* brightred{"\e[1;91m"};
static constexpr const char* brightgreen{"\e[1;92m"};
static constexpr const char* reset{"\e[0m"};
}  // namespace colors

#define colorize(color, what) \
    color << what << colors::reset