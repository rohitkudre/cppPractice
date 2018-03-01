#ifndef RKSTACK_H
#define RKSTACK_H


class RKStack
{
    public:
        RKStack(int );
        void pushIn(int );
        bool isEmpty();
        int pop();
        ~RKStack();

    protected:

    private:
        int top;
        int maxVal;
        int stackArr[maxVal];

};

#endif // RKSTACK_H
