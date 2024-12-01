#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node * PPNODE;

class SinglyLL  //if we create obj of this class then memory would be allocated 8 bytes
{
    public:
        //Characteristics
        PNODE First;       
        int iCount;

        //Behaviours
        SinglyLL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPositiont(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
};

int main()
{
    SinglyLL obj1;

    return 0;
}
