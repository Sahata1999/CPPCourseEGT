#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    Circle(double radius);
    virtual void draw()  override;
    virtual ~Circle() = default;

private:
    double radius;
};

