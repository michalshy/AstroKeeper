//
// Created by Michin on 02.04.2024.
//

#include "GameController.hpp"
GameController::GameController(MenuWindow* _menu, GameEngine* _engine)
{
    menu = _menu;
    engine = _engine;
}
void GameController::startGame()
{
    while (isInMenu)
    {
        menu->startScreen();


        if(GetAsyncKeyState(VK_DOWN) < 0)
        {
            std::cout<<"exit";
            break;
        }
    }
}
