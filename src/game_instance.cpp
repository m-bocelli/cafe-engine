#include "game_instance.hpp"

GameInstance::GameInstance(): isGameRunning(0) {
    screen = new Screen();
    if (screen)
        isGameRunning = 1;
}

void GameInstance::handle_input() {
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
                exit(0);
                break;
            default:
                break;
        }
    }
}

void GameInstance::update() {
    SDL_SetRenderDrawColor(screen->renderer, 96, 128, 255, 255);
	SDL_RenderClear(screen->renderer);
    SDL_RenderPresent(screen->renderer);
}

GameInstance::~GameInstance() {
    delete screen;
    SDL_Quit();
}

