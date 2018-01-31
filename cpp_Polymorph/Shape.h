#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    public:
        Shape(int x, int y);
        int width;
        int height;
        virtual int findArea();
    protected:

    private:

};

#endif // SHAPE_H
