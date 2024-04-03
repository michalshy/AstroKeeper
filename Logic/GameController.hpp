//
// Created by Michin on 02.04.2024.
//
#include "../GUI/MenuWindow.hpp"
#include "ConfigTexts.hpp"
#include "../Engine/GameEngine.hpp"


#ifndef ASTROKEEPER_GAMECONTROLLER_HPP
#define ASTROKEEPER_GAMECONTROLLER_HPP


class GameController {
    bool isInMenu = true;
    MenuWindow* menu = nullptr;
    GameEngine* engine = nullptr;
public:
    explicit GameController(MenuWindow* _menu, GameEngine* _engine);
    void startGame();

};


#endif //ASTROKEEPER_GAMECONTROLLER_HPP
