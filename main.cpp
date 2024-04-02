#include <iostream>
#include "GUI/HelpTexts.hpp"
#include "GUI/MenuWindow.hpp"
#include "Logic/GameController.hpp"
#include "Logic/Config.hpp"
#include <windows.h>




int main(int argc, char** argv) {
    if(argc != 1)
        std::cout << debugTexts::paramError << std::endl;
    MenuWindow menu;
    GameController gameController(menu);
    gameController.startGame();
    return 0;
}
