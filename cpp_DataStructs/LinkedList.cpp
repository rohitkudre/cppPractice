#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
    headNode = NULL;
    lengthLL = 0;
}

void LinkedList::insertNode(int dToInsert)
{
    Node *newNode = new Node;
    Node *tempNode;
    newNode->data = dToInsert;
    if (headNode == NULL)
    {
        headNode = newNode;
        newNode->nextNode = NULL;
    }
    else
    {
        tempNode = headNode;
        while(tempNode->nextNode)
        {
            tempNode = tempNode->nextNode;
        }
        tempNode->nextNode = newNode;
    }
}

void LinkedList::printData()
{
    Node *tempNode;
    tempNode = headNode;
    while(tempNode->nextNode)
    {
        cout << tempNode->data << endl;
        tempNode = tempNode->nextNode;
    }
    cout << tempNode->data << endl;
}

LinkedList::~LinkedList()
{
    cout << "Linked List Destroyed" << endl;
}
