#include <iostream>
#include <time.h>

auto main() -> int {
    srand(time(NULL));
    auto i = int(rand() % 100 + 1);
    auto in = int();
    auto line = std::string();
    while(true){
        std::cout << "guess: ";
        std::getline(std::cin, line);
        in = std::stoi(line);
        if (in > i){
            std::cout << "number too big!\n";
            continue;
        }
        if (in < i){
            std::cout << "number too small!\n";
            continue;
        }
        std::cout << "just right!";
        break;
    }
    return 0;
}
