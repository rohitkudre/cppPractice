#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"


class Triangle: public Shape
{
    public:
        Triangle(int, int);
        int findArea();

    protected:

    private:
};

#endif // TRIANGLE_H
