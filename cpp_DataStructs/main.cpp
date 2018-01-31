#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList  *listLL = new LinkedList();
    listLL->insertNode(25);
    listLL->insertNode(30);
    listLL->printData();
    delete listLL;
    return 0;
}
