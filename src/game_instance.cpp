#include "game_instance.hpp"

GameInstance::GameInstance(Screen* _screen) {
    screen = _screen;
}

GameInstance::~GameInstance() {
    SDL_Quit();
}

