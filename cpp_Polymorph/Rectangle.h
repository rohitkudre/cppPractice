#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle: public Shape
{
    public:
        Rectangle(int, int);
        int findArea();

    protected:

    private:
};

#endif // RECTANGLE_H
