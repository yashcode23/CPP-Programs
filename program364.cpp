#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}
void SinglyLL::Display()
{}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(int No)
{}

void SinglyLL::InsertLast(int No)
{}

void SinglyLL::InsertAtPos(int No, int iPos)
{}

void SinglyLL::DeleteFirst()
{}

void SinglyLL::DeleteLast()
{}

void SinglyLL::DeleteAtPos(int iPos)
{}

int main()
{
    SinglyLL obj;
    int iRet = 0;

    iRet = obj.Count();

    cout<<"Number of elemensts are : "<<iRet<<endl;

    return 0;
}