#include <iostream>
#include <pthread.h>

using namespace std;
static pthread_mutex_t mutex;

void *worker_thread(void *argToThread)
{
    long argVal = (long)argToThread;
    pthread_mutex_lock(&mutex);
    cout  << "Inside thread: " << argVal << endl;
    pthread_mutex_unlock(&mutex);
    return (void *) argVal;
}

int main()
{
    pthread_t pt1[5];
    long i;
    int retVal;
    int threadJoin;

    void *status;
    for (i = 0; i < 5; i ++)
    {
        retVal = pthread_create(&pt1[i], NULL, worker_thread, (void *)i);
    }

    for (i = 0; i < 5; i ++)
    {
        retVal = pthread_join(pt1[i], &status);
        cout << "Thread joined: " << (long)status;
    }

}
