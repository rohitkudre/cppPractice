#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        Node *headNode;
        void insertNode(int );
        void deleteNode(int );
        void printData();
        int getLength();

    protected:

    private:
        int lengthLL;
};

#endif // LINKEDLIST_H
