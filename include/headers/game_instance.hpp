#ifndef GAMEINSTANCE_HPP
#define GAMEINSTANCE_HPP

#include "screen.hpp"
#include <SDL.h>
#include <SDL_image.h>

struct GameInstance {
    GameInstance();
    ~GameInstance();
    Screen* screen;
    
    void handle_input();
    void update();
    void clean_sdl();
    
    bool isGameRunning;
};

#endif
