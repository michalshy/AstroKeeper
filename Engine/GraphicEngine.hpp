//
// Created by Michin on 03.04.2024.
//
#include <windows.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include "../Globals.hpp"
#ifndef ASTROKEEPER_GRAPHICENGINE_HPP
#define ASTROKEEPER_GRAPHICENGINE_HPP


class GraphicEngine {
public:
    void drawVerticalLine(COORD c, int size);
    void drawHorizontalLine(COORD c, int size);
    bool setCursor(short x, short y);
};


#endif //ASTROKEEPER_GRAPHICENGINE_HPP
