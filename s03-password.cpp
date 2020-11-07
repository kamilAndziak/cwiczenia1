#include <iostream>
#include <string.h>

auto main() -> int {
    char pass[20];
    std::cout << "Ustaw haslo: ";
    std::cin >> pass;

    char pass2[20];
    do{
        std::cout << "Podaj haslo: ";
        std::cin >> pass2;
    }while(strcmp(pass, pass2));

    std::cout << "Haslo poprawne";
    return 0;
}
