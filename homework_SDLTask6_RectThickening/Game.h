#pragma once
#include <SDL.h>
#include "Shape.h"

using namespace std;

class Game {

public:

  
    Game();
    ~Game();

    
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
  
    void render();
    
    void update();
   
    void handleEvents();
  
    void clean();
  
    bool isRunning();

private:

   
    SDL_Window* gameWindow = NULL;
    SDL_Renderer* gameRenderer = NULL;
   
    bool running;

};

