//
// Created by Michin on 02.04.2024.
//

#include "MenuWindow.hpp"

MenuWindow::MenuWindow(GraphicEngine *_engine)
{
    engine = _engine;
}


void MenuWindow::startScreen()
{
    system("cls");
    engine->drawHorizontalLine({0,0}, 120);
    engine->drawVerticalLine({0,1}, 28);
    engine->drawHorizontalLine({0, 29}, 120);
    engine->drawVerticalLine({120, 1}, 28);
    changeTextColor(textColors::PINK);
    engine->setCursor(0, 12);
    std::cout<<mainMenuTexts::title<<std::endl;
}

