//
// Created by Michin on 02.04.2024.
//

#include <windows.h>
#include <iostream>
#include "TextNamespaces.hpp"
#include "../Globals.hpp"


#ifndef ASTROKEEPER_CONFIG_HPP
#define ASTROKEEPER_CONFIG_HPP



static void changeTextColor(int color)
{
    SetConsoleTextAttribute(cmd::h, color);
}

#endif //ASTROKEEPER_CONFIG_HPP
