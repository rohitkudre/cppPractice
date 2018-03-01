#ifndef PTTEST_H
#define PTTEST_H
#include <pthread.h>

class ptTest
{
    public:
        ptTest();
        static void *mainLoop();
        ~ptTest();
    protected:
    private:
        bool time_to_stop;
        pthread_t thread_id;
};

#endif // PTTEST_H
