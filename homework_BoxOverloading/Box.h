#pragma once
#include <iostream>
using namespace std;


class Box
{
public:
	Box(int lenght, int width, int height);

	void setLength(int length);
void setWidth(int width);
void setHeight(int height);

int getLength();
int getWidth();
int getHeight();

bool operator+(const Box& other) const;
bool operator=(const Box& other) ;




private:
	int length;
	int width;
	int height;
};

