#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
int main()
{
    Shape *sh1;
    Shape *sh2;
    Rectangle rec(10,7);
    Triangle tri(19,15);
    sh1 = &rec;
    sh2 = &tri;

    cout << sh1->findArea() << endl;
    cout << sh2->findArea() << endl;
    return 0;
}
