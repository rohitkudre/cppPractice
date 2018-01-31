#include <iostream>
#include "testClass.h"
using namespace std;

ostream& operator<<(ostream &os, testClass t)
{
    os << t.tempVar;
    return(os);
}

int main()
{
    testClass temp1(35);

//    temp3 = temp1+temp2;
    cout << temp1 << endl;
    return 0;
}
