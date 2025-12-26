#include "stringlib.h"
#include <algorithm>

std::string toUpper(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

std::string reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}