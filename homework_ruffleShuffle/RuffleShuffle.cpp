#include"PlayingCard.h"
#include"DeckOfCards.h"

#include <iostream>

int main()
{
	
	DeckOfCards deck;
	deck.displayDeck(false, 52);
	deck.riffleShuffle();
deck.displayDeck(true, 52);





	return 0;






}

