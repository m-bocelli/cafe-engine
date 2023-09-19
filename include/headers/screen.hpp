#ifndef SCREEN_HPP
#define SCREEN_HPP

#include <SDL.h>
#include <SDL_image.h>

struct Screen {
    Screen();
    ~Screen();
    
    int width;
    int height;
    
    SDL_Renderer* renderer;
    SDL_Window* window;
};


#endif
