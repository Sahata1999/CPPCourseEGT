#include <iostream>
#include "Game.h"


Game* game = NULL;
const int WINDOW_WIDTH = 1200;
const int WINDOW_HEIGHT = 1000;

int main(int argc, char* argv[]) {

   

    game = new Game();
    game->init("MEMORY GAME",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        SDL_WINDOW_RESIZABLE);
    game->ttf_init();
    Uint32 startTime = SDL_GetTicks();
    while (game->isRunning()) {

        game->handleEvents();
        game->render();

        int totalTimeSeconds = (SDL_GetTicks() - startTime) / 1000.0; 
        game->setTime(totalTimeSeconds); 
    }

  

    delete game;

    return 0;
}
