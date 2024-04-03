//
// Created by Michin on 02.04.2024.
//

#include <windows.h>
#include <iostream>
#include <thread>
#include <iomanip>
#include "TextNamespaces.hpp"
#include "../Globals.hpp"


#ifndef ASTROKEEPER_CONFIG_HPP
#define ASTROKEEPER_CONFIG_HPP


static void changeTextColor(int color)
{
    SetConsoleTextAttribute(cmd::hOutput, color);
}

static void typeWriteMessage(std::string& s, int time)
{
    for (const auto c : s) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(time));
    }
}

#endif //ASTROKEEPER_CONFIG_HPP
