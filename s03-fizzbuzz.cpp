#include <iostream>

auto main(int argc, char *argv[]) -> int {
    auto i = std::stoi(argv[1]);
    if (i%3 == 0){
        std::cout << "Fizz";
    }
    if (i%5 == 0){
        std::cout << "Buzz";
    }
    return 0;
}
