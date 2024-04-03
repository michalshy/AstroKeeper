cmake_minimum_required(VERSION 3.27)
project(AstroKeeper)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(AstroKeeper main.cpp
        GUI/HelpTexts.hpp
        GUI/MenuWindow.cpp
        GUI/MenuWindow.hpp
        Logic/GameController.cpp
        Logic/GameController.hpp
        Logic/ConfigTexts.hpp
        Logic/TextNamespaces.hpp
        Globals.hpp
        Engine/GameEngine.cpp
        Engine/GameEngine.hpp
        Engine/GraphicEngine.cpp
        Engine/GraphicEngine.hpp
)
