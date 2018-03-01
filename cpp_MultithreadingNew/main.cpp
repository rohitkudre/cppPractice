#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include "ptTest.h"

using namespace std;
int main()
{
    ptTest *ptObject = new ptTest();
    usleep(100000000);
    delete ptObject;
    ptObject = NULL;
    return 0;
}
