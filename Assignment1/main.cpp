#include <iostream>
#include "myheader.h"

int main() {
    greet("world");

    std::string input;
    std::cout << "Enter a name: " << std::endl;
    std::getline(std::cin, input);

    greet(input);

    return 0;
}