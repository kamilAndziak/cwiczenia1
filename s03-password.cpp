#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int {
    auto const password = std::string{argv[1]};
    auto in = std::string();
    do{
        std::cout << "Podaj haslo: ";
        std::getline(std::cin, in);
    }while(in.compare(password));

    std::cout << "Haslo poprawne";
    return 0;
}

