//
// Created by Michin on 02.04.2024.
//
#include "process.h"
#include <cstdio>
#include <iostream>
#include <Windows.h>
#include "HelpTexts.hpp"
#include "../Logic/Config.hpp"

#ifndef ASTROKEEPER_MENUWINDOW_HPP
#define ASTROKEEPER_MENUWINDOW_HPP


class MenuWindow {
private:

public:
    void startScreen();
    void adjustWindow(const int &width, const int &height);

};


#endif //ASTROKEEPER_MENUWINDOW_HPP
