#include <iostream>

auto main() -> int {
    int i = rand() % 100 + 1;
    int in;
    while(true){
        std::cout << "guess: ";
        std::cin >> in;
        if (in > i){
            std::cout << "number too big!" << std::endl;
            continue;
        }
        if (in < i){
            std::cout << "number too small!" << std::endl;
            continue;
        }
        std::cout << "just right!";
        break;
    }
    return 0;
}
