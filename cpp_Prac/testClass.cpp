#include <iostream>

#include "testClass.h"
using namespace std;

testClass::testClass()
{
}

testClass::testClass(int x)
{
//    cout << "testClass Created" << endl;
    tempVar = x;
}

void testClass::printDets()
{
    cout << "tempVar = " << tempVar << endl;
}

testClass::~testClass()
{
//    cout << "destroyed" << endl;
}

