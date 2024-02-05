#pragma once
#include<string>
#include<iostream>
using namespace std;
class PlayingCard {
public:
    //initialize with type and suite chars
    PlayingCard(string type, char suit);
    ~PlayingCard();
    void setType(string);
    string getType();
    void setSuit(char);
    char getSuit();
    void print();

private:
    string type;
    char suit;
};

