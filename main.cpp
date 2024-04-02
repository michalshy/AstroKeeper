#include <iostream>
#include "windows.h"
#include "GUI/HelpTexts.hpp"

int main(int argc, char** argv) {
    //Clear window on app execution
    system("mode 650");
    if(argc != 1)
        std::cout << debugTexts::paramError << std::endl;

    std::cout << "heh" << std::endl;
    std::cout << "\033[1;31mbold red text\033[0m\n";

    //For debugging only
    system("pause");
    return 0;
}
