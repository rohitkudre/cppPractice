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
    newNode->nextNode = NULL;
    if (headNode == NULL)
    {
        headNode = newNode;
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
    lengthLL ++;
}

void LinkedList::printData()
{
    Node *tempNode;
    int i;
    tempNode = headNode;
    for(i = 0; i < lengthLL; i ++)
    {
        cout << tempNode->data << endl;
        tempNode = tempNode->nextNode;
    }
}

void LinkedList::deleteNode(int dToDelete)
{
    Node *currNode = new Node;
    Node *prevNode = headNode;
    currNode = headNode;
    int i;
    if (currNode->data == dToDelete)
    {
        headNode = headNode->nextNode;
        delete currNode;
        lengthLL --;
        return;
    }
    for (i = 0; i < lengthLL; i++)
    {
        if (currNode->data == dToDelete)
        {
            prevNode->nextNode = currNode->nextNode;
            delete currNode;
            lengthLL --;
            return;
        }
        prevNode = currNode;
        currNode = currNode->nextNode;
    }
    delete currNode;
    cout << "Node with data = " << dToDelete << " Not found" << endl;
}

LinkedList::~LinkedList()
{
    cout << "Linked List Destroyed" << endl;
}
