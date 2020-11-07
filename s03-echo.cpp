#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int {
    auto n = false;
    auto r = false;
    auto l = false;

    auto cfg = 0;

    if (argc == 1){
        std::cout << "Brak argumentow\n";
        return 0;
    }

    auto const arg1 = std::string{argv[1]};
    if ((arg1 == "-r" || arg1 == "-l" || arg1 == "-n") && argc == 2){
        std::cout << "Brak argumentow\n";
        return 0;
    }
    if (arg1 == "-r"){
        r = true;
        ++cfg;
        auto const arg2 = std::string{argv[2]};
        if ((arg2 == "-l" || arg2 == "-n") && argc == 3){
            std::cout << "Brak argumentow\n";
            return 0;
        }
        if (arg2 == "-l"){
            l = true;
            ++cfg;
        }
        else if (arg2 == "-n"){
            n = true;
            ++cfg;
        }
    }else if (arg1 == "-l"){
        l = true;
        ++cfg;
    }else if(arg1 == "-n"){
        n = true;
        ++cfg;
    }

    if (r){
        for (auto i = argc - 1; i > 0 + cfg; --i) {
            std::cout << argv[i] << (l ? "\n" : " ");
        }
    }
    else {
        for (auto i = 1 + cfg; i < argc; ++i) {
            std::cout << argv[i] << (l ? "\n" : " ");
        }
    }
    if (!n) std::cout << "\n";
}
