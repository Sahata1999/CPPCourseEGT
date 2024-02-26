#include "Board.h"

Deck::Deck(SDL_Renderer* renderer) : renderer(renderer) {

    // пълним вектора
    Card chip1("chip1", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip1.png"));
    Card chip2("chip2", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip2.png"));
    Card chip3("chip3", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip3.png"));
    Card chip4("chip4", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip4.png"));
    Card chip5("chip5", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip5.png"));
    Card chip6("chip6", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip6.png"));
    Card chip7("chip7", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip7.png"));
    Card chip8("chip8", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip8.png"));
    Card chip9("chip9", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip9.png"));
    Card chip10("chip10", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip10.png"));
    Card chip11("chip11", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip11.png"));
    Card chip12("chip12", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip12.png"));
    Card chip13("chip13", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip13.png"));
    Card chip14("chip14", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip14.png"));
    Card chip15("chip15", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip15.png"));
    Card chip16("chip16", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip16.png"));
    Card chip17("chip17", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip17.png"));
    Card chip18("chip18", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip18.png"));
    Card chip19("chip19", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip19.png"));
    Card chip20("chip20", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip20.png"));
    Card chip21("chip21", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip21.png"));
    Card chip22("chip22", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip22.png"));
    Card chip23("chip23", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip23.png"));
    Card chip24("chip24", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip24.png"));
    Card chip25("chip25", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip25.png"));
    Card chip26("chip26", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip26.png"));
    Card chip27("chip27", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip27.png"));
    Card chip28("chip28", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip28.png"));
    Card chip29("chip29", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip29.png"));
    Card chip30("chip30", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip30.png"));
    Card chip31("chip31", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip31.png"));
    Card chip32("chip32", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/chip32.png"));



    deckOfCards.push_back(chip1);
    deckOfCards.push_back(chip2);
    deckOfCards.push_back(chip3);
    deckOfCards.push_back(chip4);
    deckOfCards.push_back(chip5);
    deckOfCards.push_back(chip6);
    deckOfCards.push_back(chip7);
    deckOfCards.push_back(chip8);
    deckOfCards.push_back(chip9);
    deckOfCards.push_back(chip10);
    deckOfCards.push_back(chip11);
    deckOfCards.push_back(chip12);
    deckOfCards.push_back(chip13);
    deckOfCards.push_back(chip14);
    deckOfCards.push_back(chip15);
    deckOfCards.push_back(chip16);
    deckOfCards.push_back(chip17);
    deckOfCards.push_back(chip18);
    deckOfCards.push_back(chip19);
    deckOfCards.push_back(chip20);
    deckOfCards.push_back(chip21);
    deckOfCards.push_back(chip22);
    deckOfCards.push_back(chip23);
    deckOfCards.push_back(chip24);
    deckOfCards.push_back(chip25);
    deckOfCards.push_back(chip26);
    deckOfCards.push_back(chip27);
    deckOfCards.push_back(chip28);
    deckOfCards.push_back(chip29);
    deckOfCards.push_back(chip30);
    deckOfCards.push_back(chip31);
    deckOfCards.push_back(chip32);

}
void Deck::setDeckOfChips(std::vector<Card> deckOfCards) {
    this->deckOfCards = deckOfCards;
}
std::vector<Card>& Deck::getDeckOfChips() {
    return this->deckOfCards;
}
void Deck::setPlayingDeckOfChips(std::vector<Card> playingDeckOfCards) {
    this->playingDeckOfCards = playingDeckOfCards;
}
std::vector<Card>& Deck::getPlayingDeckOfChips() {
    return playingDeckOfCards;
}
void Deck::setBackCards(std::vector<Card> deckOfCards) {
    this->deckOfCards = deckOfCards;
}
std::vector<Card>& Deck::getBackCards() {
    return this->deckOfCards;
}


void Deck::startGame(int number) {
    for (int i = 0; i < number / 2; i++) {
        playingDeckOfCards.push_back(deckOfCards.at(i));
        playingDeckOfCards.push_back(deckOfCards.at(i));
    }
    Card backCard("questionMark", IMG_LoadTexture(renderer, "C:/Users/Alexander/source/repos/MemoryGameProject/assets/pictures/questionmark.png"));
    for (int i = 0; i < number; i++) {
        backCards.push_back(backCard);
    }
}
void Deck::shuffleDeck() {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::shuffle(playingDeckOfCards.begin(), playingDeckOfCards.end(), rng);
}

void Deck::printDeck() {
    int xCordinates = 5;
    int yCordinates = 5;
    int wCordinates = 70;
    int hCordinates = 100;
    int count = 0;

 
  
    if (playingDeckOfCards.size() == 64) { 
        for (auto it = playingDeckOfCards.begin(); it != playingDeckOfCards.end(); ++it) {
            it->setRect(xCordinates, yCordinates, wCordinates, hCordinates);
            if (it->isHidden() != true) {
                it->drawCard(it->getRect().x, it->getRect().y, it->getRect().w, it->getRect().h, renderer);
            }
            count++;
            xCordinates += 105;

            if (count == 8 || count == 16 || count == 24 || count == 32 || count == 40 || count == 48 || count == 56) {
                yCordinates += 105;
                xCordinates = 5;
            }
        }
    }
}

void Deck::printBackChips() {
    int xCordinates = 5;
    int yCordinates = 5;
    int count = 0;


    if (backCards.size() == 64) { 
        for (auto it = backCards.begin(); it != backCards.end(); ++it) {
            it->drawCard(xCordinates, yCordinates, 100, 100, renderer);
            count++;
            xCordinates += 105;

            if (count == 8 || count == 16 || count == 24 || count == 32 || count == 40 || count == 48 || count == 56) {
                yCordinates += 105;
                xCordinates = 5;
            }
        }
    }

}

void Deck::printHintChips() {
    int xCordinates = 20;
    int yCordinates = 20;
    int wCordinates = 64;
    int hCordinates = 64;
    int count = 0;


    if (playingDeckOfCards.size() == 64) { 
        for (auto it = playingDeckOfCards.begin(); it != playingDeckOfCards.end(); ++it) {
            it->setRect(xCordinates, yCordinates, wCordinates, hCordinates);
            if (it->isClicked() == true) {
                it->drawCard(it->getRect().x, it->getRect().y, it->getRect().w, it->getRect().h, renderer);
            }
            count++;
            xCordinates += 105;

            if (count == 8 || count == 16 || count == 24 || count == 32 || count == 40 || count == 48 || count == 56) {
                yCordinates += 50;
                xCordinates = 5;
            }
        }
    }
}
void Deck::clean() {
    std::cout << "cleaning deck\n";

    SDL_DestroyRenderer(renderer);
}
