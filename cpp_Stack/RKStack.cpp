#include "RKStack.h"

RKStack::RKStack(int maxV)
{
    maxVal = maxV;
    top = -1;
}

void RKStack::pushIn(int numToPush)
{
    stackArr[++top] = numToPush;
}

int RKStack::pop()
{

}
RKStack::~RKStack()
{
    //dtor
}
