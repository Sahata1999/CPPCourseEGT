#pragma once
#include<SDL.h>
#include<SDL_image.h>
#include "TextureManager.h"

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
   
    int currentFrame = 0;
    const int frameWidth = 65;
    const int frameHeight = 65;
    const int spriteRow = 0;
    const int frameCount = 4;
    Uint32 frameDuration = 100;
    Uint32 lastFrame = 0;

};

