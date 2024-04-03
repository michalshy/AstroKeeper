#include <iostream>
#include "GUI/HelpTexts.hpp"
#include "GUI/MenuWindow.hpp"
#include "Logic/GameController.hpp"
#include "Logic/ConfigTexts.hpp"
#include "Engine/GameEngine.hpp"
#include "Engine/GraphicEngine.hpp"

int main(int argc, char** argv) {
    if(argc != 1)
        std::cout << debugTexts::paramError << std::endl;
    GameEngine lEngine;
    GraphicEngine gEngine;
    MenuWindow menu(&gEngine);
    GameController gameController(&menu, &lEngine);
    gameController.startGame();

    return 0;
}
