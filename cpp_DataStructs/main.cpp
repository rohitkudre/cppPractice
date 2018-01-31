#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList  *listLL = new LinkedList();
    listLL->insertNode(25);
    listLL->insertNode(30);
    listLL->insertNode(35);
    listLL->insertNode(40);
    listLL->insertNode(45);
    listLL->insertNode(50);
    listLL->insertNode(55);
    listLL->printData();
    listLL->deleteNode(55);
    listLL->printData();
    delete listLL;
    return 0;
}
