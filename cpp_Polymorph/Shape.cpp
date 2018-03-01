#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(int x, int y): width(x), height(y)
{
}

Shape::getWidth()
{
    return width;
}

Shape::getHeight()
{
    return height;
}

int Shape::findArea()
{
    return 0;
}
