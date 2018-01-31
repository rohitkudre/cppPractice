#ifndef TESTCLASS_H
#define TESTCLASS_H
#include <iostream>

class testClass
{
    public:
        testClass(int);
        testClass();
        void printDets();
        ~testClass();
        friend std::ostream& operator<<(std::ostream &, testClass);
        int tempVar;
    protected:

    private:

};

#endif // TESTCLASS_H
