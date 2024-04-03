//
// Created by Michin on 02.04.2024.
//
#include "process.h"
#include <cstdio>
#include <iostream>
#include <Windows.h>
#include "HelpTexts.hpp"
#include "../Logic/ConfigTexts.hpp"
#include "../Globals.hpp"
#include "../Engine/GraphicEngine.hpp"

#ifndef ASTROKEEPER_MENUWINDOW_HPP
#define ASTROKEEPER_MENUWINDOW_HPP


class MenuWindow {
private:
    GraphicEngine* engine = nullptr;
public:
    MenuWindow(GraphicEngine* _engine);

    void startScreen();

};


#endif //ASTROKEEPER_MENUWINDOW_HPP
