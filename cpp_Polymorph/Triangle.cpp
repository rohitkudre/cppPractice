#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

Triangle::Triangle(int x, int y):Shape(x, y)
{
}

int Triangle::findArea()
{
    cout << "The area of Triangle is: " << endl;
    return((getWidth()*getHeight()) / 2);
}
