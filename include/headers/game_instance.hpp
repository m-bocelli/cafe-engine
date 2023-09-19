#ifndef GAMEINSTANCE_HPP
#define GAMEINSTANCE_HPP

#include "screen.hpp"
#include <SDL.h>
#include <SDL_image.h>

struct GameInstance {
    GameInstance(Screen* screen);
    ~GameInstance();
    Screen* screen;
    void clean_sdl();
};

#endif
