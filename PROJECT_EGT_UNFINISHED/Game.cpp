#include "Game.h"

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "SDL init success\n";

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window != 0) 
        {
            std::cout << "window creation success\n";
            renderer = SDL_CreateRenderer(window, -1, 0);
            
            if (renderer != 0) 
            {

                std::cout << "renderer creation success\n";
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
                
                background = IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/bg.png");
                int ww, wh;
                SDL_GetWindowSize(window, &ww, &wh);
                SDL_QueryTexture(background, NULL, NULL, &backgroundRect.w, &backgroundRect.h);
                backgroundRect.x = 0;
                backgroundRect.y = 0;
                backgroundRect.w = ww;
                backgroundRect.h = wh;

                
                SDL_GetWindowSize(window, &ww, &wh);
                fillRect1 = { (ww / 2 - 300 / 2), ((wh / 2) + 50 / 2), 300, 50 };
                SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 128);
                SDL_RenderFillRect(renderer, &fillRect1);

               
                SDL_RWops* start = SDL_RWFromFile("C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/startbutton.png", "rb");
                buttonStart = IMG_LoadTexture_RW(renderer, start, 1);

                int tw, th;
                SDL_QueryTexture(buttonStart, 0, 0, &tw, &th);
                SDL_QueryTexture(buttonStart, NULL, NULL, &buttonStartRect.w, &buttonStartRect.h);
                buttonStartRect.x = (ww / 2 - 149 / 2);
                buttonStartRect.y = ((wh / 2) + (wh / 4) - 131 / 2);
                buttonStartRect.w = 149;
                buttonStartRect.h = 131;

                
                SDL_RWops* noTime = SDL_RWFromFile("C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/startbutton.png", "rb");
                buttonNoTime = IMG_LoadTexture_RW(renderer, noTime, 1);

                SDL_QueryTexture(buttonNoTime, 0, 0, &tw, &th);
                SDL_QueryTexture(buttonNoTime, NULL, NULL, &buttonNoTimeRect.w, &buttonNoTimeRect.h);
                buttonNoTimeRect.x = (ww / 2 - 149 / 2);
                buttonNoTimeRect.y = ((wh / 9) * 8 - 131 / 2);
                buttonNoTimeRect.w = 149;
                buttonNoTimeRect.h = 131;

                
                fillRect2 = { 0, 0, ww, wh };
                SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 128);

               
                playingCards = new Deck(renderer);
                startButtonClicked = false;
                openTwoPictures = false;
                timeButtonsClicked = false;
                gameOver = false;
                onTime = false;
            }
            else {
                std::cout << "renderer init failed\n";
                return false;
            }
        }
        else {
            std::cout << "window init failed\n";
            return false;
        }
    }
    else {
        std::cout << "SDL init fail\n";
        return false;
    }
    std::cout << "init success\n";
    running = true;
    return true;
}

bool Game::ttf_init() {
    if (TTF_Init() == -1) {
        return false;
    }
    TTF_Font* fontButton = TTF_OpenFont("C:/Users/Alexander/source/repos/MemoryGameProject/assets/fontsArcade.ttf", 30);
   
    if (fontButton == NULL) {
        return false;
    }
    SDL_Surface* startButton = NULL; 
    
    SDL_Surface* noTimeButton = NULL; 
    
    noTimeButton = TTF_RenderText_Blended(fontButton, "no time", { 0, 0, 0, 0 });
    noTimeButtonNameText = SDL_CreateTextureFromSurface(renderer, noTimeButton);

    
    int ww, wh; 
    SDL_GetWindowSize(window, &ww, &wh);

    int tw, th; 
    
    SDL_QueryTexture(startButtonNameText, 0, 0, &tw, &th);
    startButtonNameRect = { (ww / 2 - 200 / 2) + (200 - tw) / 2, ((wh / 2) + (wh / 4) - 200 / 2) + (200 - th) / 2, tw, th };

    SDL_QueryTexture(hintButtonNameText, 0, 0, &tw, &th);
    hintButtonNameRect = { ww - (ww / 4) + (300 - tw) / 2, (wh / 9) * 2 + (200 - th) / 2, tw, th };

    SDL_QueryTexture(statisticButtonNameText, 0, 0, &tw, &th);
    statisticButtonNameRect = { ww - (ww / 4) + (300 - tw) / 2, (wh / 3) + ((wh / 9) * 2 + (200 - th) / 2), tw, th };

    SDL_FreeSurface(startButton);
    SDL_FreeSurface(noTimeButton);
    TTF_CloseFont(fontButton);

    return true;
}

void Game::render() {
    SDL_RenderClear(renderer);

    SDL_RenderCopy(renderer, background, NULL, &backgroundRect);

    if (!startButtonClicked) {   

        SDL_RenderCopy(renderer, buttonStart, NULL, &buttonStartRect);
        
        SDL_RenderCopy(renderer, startButtonNameText, NULL, &startButtonNameRect);

    }
    else { 

        SDL_RenderFillRect(renderer, &fillRect2);

        if (!gameOver) { 

            
            if (!timeButtonsClicked) {
                SDL_RenderCopy(renderer, buttonNoTime, NULL, &buttonNoTimeRect);
          
            }
            else { 
              
                playingCards->printBackChips();

               
                playingCards->printDeck();

             
                

              
                if (hint) {
                    playingCards->printHintChips();
                }

                SDL_RenderCopy(renderer, buttonStatistic, NULL, &buttonStatisticRect);
                SDL_RenderCopy(renderer, statisticButtonNameText, NULL, &statisticButtonNameRect);
            }

        }
        else { 

            if (chosedTime >= time || chosedTime == 0) {
                onTime = true;
            }
            else {
                onTime = false;
            }

            if (onTime) { 

                
                SDL_RenderCopy(renderer, resultWinText, NULL, &resultWinRect);

            }
            else {
              
                SDL_RenderCopy(renderer, resultLoseText, NULL, &resultLoseRect);
            }

        }

    }

    SDL_RenderPresent(renderer);
}

bool Game::isClickableTextureClicked(SDL_Texture* t, SDL_Rect* r, int xDown, int yDown) {
    if ((xDown > r->x && xDown < (r->x + r->w)) &&
        (yDown > r->y && yDown < (r->y + r->h))) {
        return true;
    }
    return false;
}

void Game::handleEvents() {
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT: running = false; break;
        case SDL_MOUSEBUTTONDOWN: {
            int msx, msy;
            if (event.button.button == SDL_BUTTON_LEFT) {
                SDL_GetMouseState(&msx, &msy);

                if (startButtonClicked == false) { 

                    if (isClickableTextureClicked(buttonStart, &buttonStartRect, msx, msy)) {

                        std::cout << "CLICKED" << std::endl;

                        startButtonClicked = true; 
                       
                       
                        playingCards->startGame(randomNumber);
                        playingCards->shuffleDeck();
                        playingCards->printDeck();
                    }
                    else {

                        std::cout << "NOT" << std::endl;

                        startButtonClicked = false;
                    }

                }
                else {

                    if (!timeButtonsClicked) {

                     
                        if (isClickableTextureClicked(buttonNoTime, &buttonNoTimeRect, msx, msy)) {
                            timeButtonsClicked = true;
                            chosedTime = 0;
                        }
                    }
                    else {

                        if (!openTwoPictures) {

                            
                            for (auto it = playingCards->getPlayingDeckOfChips().begin();
                                it != playingCards->getPlayingDeckOfChips().end(); ++it) {
                                if (isClickableTextureClicked(it->getTexture(), &it->getRect(), msx, msy)) {
                                    it->reveal();
                                    it->clicked(); 

                                    if (firstRevealedCard != nullptr) {
                                        secondRevealedCard = &(*it);
                                        openTwoPictures = true;

                                    }
                                    else {
                                        firstRevealedCard = &(*it);
                                    }
                                    break; 
                                }
                            }

                            
                           

                        }
                    }
                }
            }
        }; break;
        case SDL_MOUSEBUTTONUP: {
            int msx, msy;
            if (event.button.button == SDL_BUTTON_LEFT) {
                SDL_GetMouseState(&msx, &msy);
                if (firstRevealedCard != nullptr && secondRevealedCard != nullptr) {
                    if (firstRevealedCard->getId() == secondRevealedCard->getId()) {
                     

                        isGameOver(); 

                        firstRevealedCard = nullptr;
                        secondRevealedCard = nullptr;
                        openTwoPictures = false;

                        moves++;

                    }
                    else {
                        SDL_Delay(1000); 
                       

                        moves++;
                        mistakes++;

                        firstRevealedCard->hide();
                        secondRevealedCard->hide(); 

                        firstRevealedCard = nullptr;
                        secondRevealedCard = nullptr;
                        openTwoPictures = false;


                    }
                }
               
            }
        }; break;
       


        default: break;
        }
    }
}

// сетване на времето
void Game::setTime(float time) {
    this->time = time;
}
float Game::getTime() {
    return time;
}



void Game::isGameOver() {
    
    int count = 0;

    for (auto it = playingCards->getPlayingDeckOfChips().begin(); it != playingCards->getPlayingDeckOfChips().end(); ++it) {
        if (it->isHidden() == false) {
            count++;
        }
    }

    
    if (count == randomNumber) {
        gameOver = true;
    }

}

void Game::clean() {
    std::cout << "cleaning game\n";
    SDL_DestroyTexture(startButtonNameText);
    SDL_DestroyTexture(noTimeButtonNameText);
    SDL_DestroyTexture(resultWinText);
    SDL_DestroyTexture(resultLoseText);

    SDL_DestroyTexture(background);
    SDL_DestroyTexture(buttonStart);
    SDL_DestroyTexture(buttonNoTime);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

bool Game::isRunning() {
    return Game::running;
}

Game::Game() : firstRevealedCard(nullptr), secondRevealedCard(nullptr) {
    Game::window = NULL;
    Game::renderer = NULL;
    Game::running = true;

    Game:: moves = 0; 
    Game:: mistakes = 0; 

    Game::time = 0; 
}

Game::~Game() {
    clean();
    delete playingCards;
    delete firstRevealedCard;
    delete secondRevealedCard;
}
