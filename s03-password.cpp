#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int {
    auto pass = std::string();
    do{
        std::cout << "Podaj haslo: ";
        std::getline(std::cin, pass);
    }while(pass.compare(argv[1]));

    std::cout << "Haslo poprawne";
    return 0;
}

