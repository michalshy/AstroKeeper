//
// Created by Michin on 02.04.2024.
//

#include "GameController.hpp"
GameController::GameController(MenuWindow &menuWindow)
{
    menu = &menuWindow;
}
void GameController::startGame()
{
    while (isInMenu)
    {
        menu->adjustWindow(800,600);
        menu->startScreen();
        std::cin.get();
    }
}
