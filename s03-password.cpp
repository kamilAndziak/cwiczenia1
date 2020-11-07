#include <iostream>
#include <cstring>

auto main(int argc, char *argv[]) -> int {
    char pass[argc];
    do{
        std::cout << "Podaj haslo: ";
        std::cin >> pass;
    }while(strcmp(argv[1], pass));

    std::cout << "Haslo poprawne";
    return 0;
}

