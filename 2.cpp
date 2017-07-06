#include <iostream>

int pretty_print() {
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    const std::string greeting = "Hello, " + name + "!";
    return 0;
}