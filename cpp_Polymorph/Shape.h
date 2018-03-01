#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    public:
        Shape(int x, int y);
        int getWidth();
        int getHeight();
        virtual int findArea();

    protected:

    private:
        int width;
        int height;
};

#endif // SHAPE_H
