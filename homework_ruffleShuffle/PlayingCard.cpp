#include "PlayingCard.h"


PlayingCard::PlayingCard(string type, char suit) {
    setType(type);
    setSuit(suit);
}
PlayingCard::~PlayingCard() {}
void PlayingCard::setType(string t) {
    type = t;
}
string PlayingCard::getType() {
    return type;
}
void PlayingCard::setSuit(char s) {
    suit = s;
}
char PlayingCard::getSuit() {
    return suit;
}
void PlayingCard::print() {
    cout << type<<" "<< suit;
}