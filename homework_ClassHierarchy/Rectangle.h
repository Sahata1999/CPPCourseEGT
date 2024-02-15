#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double width, double height);
    virtual void draw() override;
    virtual ~Rectangle() = default;

private:
    double width;
    double height;
};
