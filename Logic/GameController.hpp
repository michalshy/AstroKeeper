//
// Created by Michin on 02.04.2024.
//
#include "../GUI/MenuWindow.hpp"



#ifndef ASTROKEEPER_GAMECONTROLLER_HPP
#define ASTROKEEPER_GAMECONTROLLER_HPP


class GameController {
    bool isInMenu = true;
    MenuWindow* menu = nullptr;
public:
    explicit GameController(MenuWindow& menuWindow);
    void startGame();

};


#endif //ASTROKEEPER_GAMECONTROLLER_HPP
