#include <stdio.h>
#include <string>
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

#include "Board.h"


class Game {
public:
    Game();
    ~Game();
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    bool ttf_init();
    void render();
    void handleEvents();
    void clean();
    bool isRunning();

    
    bool isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown);

    void isGameOver();

    
    void setTime(float);
    float getTime();

private:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;

    bool running; 
    bool startButtonClicked; 
    bool timeButtonsClicked; 
    bool hintButtonClicked; 
    bool statisticButtonClicked; 
    bool openTwoPictures; 
    bool gameOver; 
    bool onTime;
    bool hint; 


    SDL_Texture* gameNameText; 
    SDL_Rect gameNameRect;

    SDL_Texture* playerNameText, * playerNameStr; 
    SDL_Rect playerNameRect, playerNameStrRect; 

    SDL_Texture* startButtonNameText, * hintButtonNameText, * statisticButtonNameText; 
    SDL_Rect startButtonNameRect, hintButtonNameRect, statisticButtonNameRect; 

    
    SDL_Texture* timeOneButtonNameText, * timeTwoButtonNameText, * timeFiveButtonNameText, * noTimeButtonNameText;
  
    SDL_Rect timeOneButtonNameRect, timeTwoButtonNameRect, timeFiveButtonNameRect, noTimeButtonNameRect;

    SDL_Texture* resultWinText, * resultLoseText;
    SDL_Rect resultWinRect, resultLoseRect; 

    std::string playerName; 

    SDL_Texture* background; 
    SDL_Rect backgroundRect; 

    SDL_Texture* buttonStart, * buttonStop,  * buttonStatistic; 
    SDL_Rect buttonStartRect, buttonStopRect, buttonHintRect, buttonStatisticRect; 

    
    SDL_Texture* buttonTimeOne, * buttonTimeTwo, * buttonTimeFive, * buttonNoTime;
    
    SDL_Rect buttonTimeOneRect, buttonTimeTwoRect, buttonTimeFiveRect, buttonNoTimeRect;

    SDL_Rect fillRect1, fillRect2; 

    Deck* playingCards;
    int randomNumber; 

    Card* firstRevealedCard;
    Card* secondRevealedCard; 

    int moves, mistakes; 

   
    float time; 
    int chosedTime; 

};

