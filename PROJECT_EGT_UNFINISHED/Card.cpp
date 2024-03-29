#include "Card.h"

Card::Card(std::string id, SDL_Texture* image) : id(id), image(image), hidden(true), click(false) { }

void Card::setId(std::string id) {
    this->id = id;
}
std::string Card::getId() const {
    return id;
}
SDL_Texture* Card::getTexture() {
    return image;
}

void Card::setRect(int x, int y, int widht, int height) {
    rect.x = x;
    rect.y = y;
    rect.w = widht;
    rect.h = height;
}
SDL_Rect& Card::getRect() {
    return rect;
}

void Card::drawCard(int x, int y, int width, int height, SDL_Renderer* ren) {
    rect.x = x;
    rect.y = y;
    rect.w = width;
    rect.h = height;

    SDL_RenderCopy(ren, image, NULL, &rect);
}

void Card::hide() {
    hidden = true;
}
void Card::reveal() {
    hidden = false;
}
bool Card::isHidden() const {
    return hidden;
}

void Card::clicked() {
    click = true;
}
bool Card::isClicked() const {
    return click;
}

void Card::clean() {
    std::cout << "cleaning card\n";
    SDL_DestroyTexture(image);

    SDL_DestroyRenderer(cardRenderer);
}
