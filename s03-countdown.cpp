#include <iostream>

auto main(int argc, char *argv[]) -> int {
    for(int i = std::stoi(argv[1]); i >= 0; --i){
        std::cout << i << std::endl;
    }
    return 0;
}
