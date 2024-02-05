#include "DeckOfCards.h"

DeckOfCards::DeckOfCards() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			PlayingCard card(cardsT[j], cardsS[i]);
			cards.push_back(card);
		}
	}
}
DeckOfCards::~DeckOfCards() {}

void DeckOfCards::riffleShuffle() {
	vector<PlayingCard> half1;
	vector<PlayingCard> half2;
	for (int i = 0; i < 26; i++) {
		half1.push_back(cards[i]);
	}
	for (int i = 26; i < 52; i++) {
		half2.push_back(cards[i]);
	}
	cards.clear();
	for (int i = 0; i < 26; i++) {
		cards.push_back(half1[i]);
		cards.push_back(half2[i]);
	}
}
void DeckOfCards::displayDeck(bool isShuffled, int n) {
	if (isShuffled) {
		riffleShuffle();
	}
	for (int i = 0; i < n; i++) {
		cards[i].print();
		cout << " ";
	}
	cout << endl;
}

