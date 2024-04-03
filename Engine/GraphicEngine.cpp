//
// Created by Michin on 03.04.2024.
//

#include "GraphicEngine.hpp"

void GraphicEngine::drawHorizontalLine(COORD c, int size)
{
    SetConsoleCursorPosition(cmd::hOutput, c);
    for(int i = 0; i < size; i++)
    {
        std::cout<<"-";
    }
}

void GraphicEngine::drawVerticalLine(COORD c, int size)
{
    SetConsoleCursorPosition(cmd::hOutput, c);
    for(int i = 0; i < size; i++)
    {
        std::cout<<"|";
        c.Y++;
        SetConsoleCursorPosition(cmd::hOutput, c);
    }
}

bool GraphicEngine::setCursor(short x, short y)
{
    return SetConsoleCursorPosition(cmd::hOutput, {x, y});
}