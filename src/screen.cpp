#include "screen.hpp"
#include "defs.hpp"

Screen::Screen(): width(SCREEN_WIDTH), height(SCREEN_HEIGHT) {
    int window_flags, renderer_flags;
    
    renderer_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
    window_flags = SDL_WINDOW_SHOWN;

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        SDL_Log("SDL_Init has failed: %s", SDL_GetError());
        exit(1);
    }

    if (!IMG_Init(IMG_INIT_PNG)) {
        SDL_Log("IMG_Init has failed: %s", SDL_GetError());
        exit(1);
    }

    window = SDL_CreateWindow("Cafe Engine [Alpha]", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, window_flags);
    
    if (!window) {
        SDL_Log("Window failed to init: %s", SDL_GetError());
        exit(1);
    }

    renderer = SDL_CreateRenderer(window, -1, renderer_flags);

    if (!renderer) {
        SDL_Log("Renderer failed to init: %s", SDL_GetError());
        exit(1);
    } 
}

Screen::~Screen() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}
