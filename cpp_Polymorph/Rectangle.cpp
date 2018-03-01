#include <iostream>
#include "Shape.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int x, int y):Shape(x, y)
{
}

int Rectangle::findArea()
{
    cout << "The area of Rectangle is: " << endl;
    return (getWidth()*getHeight());
}
