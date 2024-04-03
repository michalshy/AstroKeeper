//
// Created by Michin on 03.04.2024.
//

#include "GameEngine.hpp"

bool GameEngine::isKeyPressed(int vKey)
{
    return GetAsyncKeyState(vKey) & 0x8000;
}