#include "game_instance.hpp"

GameInstance::GameInstance() {
    screen = new Screen();
}

GameInstance::~GameInstance() {
    delete screen;
    SDL_Quit();
}

