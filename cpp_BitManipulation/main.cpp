#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    int *nump = &num;
    char *p = (char *)nump;
    if (*p == 1)
    {
        cout << "Little" << endl;
    }
    else
    {
        cout << "Big" << endl;
    }
    return 0;
}
