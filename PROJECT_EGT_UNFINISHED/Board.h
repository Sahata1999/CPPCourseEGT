#pragma once
#include <stdio.h>
#include <iostream>
#include <vector>
#include <random>
#include "Card.h"

class Deck {
public:
    Deck(SDL_Renderer*);
    void setDeckOfChips(std::vector<Card>);
    std::vector<Card>& getDeckOfChips();
    void setPlayingDeckOfChips(std::vector<Card>);
    std::vector<Card>& getPlayingDeckOfChips();
    void setBackCards(std::vector<Card>);
    std::vector<Card>& getBackCards();

    
    void startGame(int); 
    void shuffleDeck(); 
    void printDeck(); 
    void printBackChips(); 
    void printHintChips(); 

    void clean();

private:
    SDL_Renderer* renderer;
    SDL_Rect imageDeckRect;
    std::vector<Card> deckOfCards;
    std::vector<Card> playingDeckOfCards;
    std::vector<Card> backCards;
};
