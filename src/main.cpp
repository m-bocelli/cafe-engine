#include "screen.hpp"
#include "game_instance.hpp"

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>


using namespace std;

int main(int argc, char* argv[])
{
    cout << "Hello world!" << endl;
    Screen screen = Screen();
    GameInstance game = GameInstance(&screen);
    cout << screen.width << endl;
    cin.get();
    return 0;
}
