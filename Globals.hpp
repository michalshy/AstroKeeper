//
// Created by Michin on 02.04.2024.
//
#include <windows.h>

#ifndef ASTROKEEPER_GLOBALS_HPP
#define ASTROKEEPER_GLOBALS_HPP

namespace cmd
{
    static HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    static HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
}


#endif //ASTROKEEPER_GLOBALS_HPP
