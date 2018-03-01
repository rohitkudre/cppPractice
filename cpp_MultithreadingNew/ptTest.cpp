#include "ptTest.h"
#include <iostream>
#include <pthread.h>
#include <unistd.h>

using namespace std;

ptTest::ptTest()
{
    cout << "Object created" << endl;
    int retValue;
    retValue = pthread_create(&thread_id, NULL, mainLoop, this);
    if (retValue)
    {
        cout << "Error in thread creation" << endl;
    }
}

void *ptTest::mainLoop()
{
    while (time_to_stop)
    {
        cout << "Executing ...." << endl;
        usleep(1000000);
    }
}

ptTest::~ptTest()
{
    time_to_stop = true;
    pthread_join(thread_id, NULL);
}
