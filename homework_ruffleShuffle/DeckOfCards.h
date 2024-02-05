#pragma once
#include"PlayingCard.h"
#include<vector>
#include<map>




    class DeckOfCards {
    public:
        DeckOfCards();
        ~DeckOfCards();
        void riffleShuffle();
        void displayDeck(bool, int);
    private:
        vector<PlayingCard> cards;
        string cardsT[13] = { "2","3","4","5","6","7","8","9","10","J", "Q", "K", "A" };
         char cardsS[4] = { 'D', 'C', 'H', 'S' };
        
    };





