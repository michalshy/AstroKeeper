//
// Created by Michin on 02.04.2024.
//

#include "MenuWindow.hpp"

void MenuWindow::startScreen()
{
    changeTextColor(textColors::PINK);
    std::cout<<mainMenuTexts::title<<std::endl;
}

void MenuWindow::adjustWindow(const int &width, const int &height)
{
    HWND console = GetConsoleWindow();
    RECT ConsoleRect;
    GetWindowRect(console, &ConsoleRect);

    MoveWindow(console, ConsoleRect.left, ConsoleRect.top, width, height, TRUE);
}
