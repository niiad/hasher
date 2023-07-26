#include <iostream>
#include "base/base1.h"

int main() {
    std::string input = "Hash";

    hasher::reverseString(input);

    std::cout << input << std::endl;
    return 0;
}
