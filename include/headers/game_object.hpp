#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

#include <SDL.h>
#include <SDL_image.h>

struct game_object
{
    int x;
    int y;
    enum dir {LEFT, RIGHT};



    SDL_Texture texture;
    
}

#endif