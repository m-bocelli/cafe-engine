#include "screen.hpp"
#include "game_instance.hpp"

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

using namespace std;

// GAME LOOP
int main(int argc, char* argv[])
{
    cout << "Cafe Engine Alpha" << endl;
    GameInstance game = GameInstance();
    
    SDL_Texture* characterTexture = IMG_LoadTexture(game.screen->renderer, "vamp.png");
    
    while(game.isGameRunning) {
        game.handle_input();
        game.update();
    }

    return 0;
}

// MinGW's g++ compiler may yell at you unless WinMain exists
int WinMain(int argc, char* argv[]) {
    return main(argc, argv);
}