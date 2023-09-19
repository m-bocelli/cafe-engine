#include "screen.hpp"
#include "game_instance.hpp"

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>


using namespace std;

int main(int argc, char* argv[])
{
    cout << "Cafe Engine Alpha" << endl;
    GameInstance game = GameInstance();
    SDL_RenderPresent(game.screen->renderer);
    cout << game.screen->width << endl;
    cin.get();
    return 0;
}
