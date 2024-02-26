#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>

class Card {
public:
    Card(std::string, SDL_Texture*);

    void setId(std::string);
    std::string getId() const;

    SDL_Texture* getTexture();

    void setRect(int, int, int, int);
    SDL_Rect& getRect(); 

    void drawCard(int, int, int, int, SDL_Renderer*); 

    void hide(); 
    void reveal(); 
    bool isHidden() const;  

    void clicked(); 
    bool isClicked() const; 

    void clean();

private:
    std::string id; 
    SDL_Texture* image;
    SDL_Rect rect; 
    SDL_Renderer* cardRenderer = NULL;
    bool hidden; 
    bool click; 
};


