#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
        int lengthLL;
        Node *headNode;
        void insertNode(int );
//        void deleteNode(int );
        void printData();

    protected:

    private:
};

#endif // LINKEDLIST_H
