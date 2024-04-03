//
// Created by Michin on 03.04.2024.
//
#include <windows.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include "../Globals.hpp"

#ifndef ASTROKEEPER_GAMEENGINE_HPP
#define ASTROKEEPER_GAMEENGINE_HPP


class GameEngine {

public:
    bool isKeyPressed(int vKey);
};


#endif //ASTROKEEPER_GAMEENGINE_HPP
