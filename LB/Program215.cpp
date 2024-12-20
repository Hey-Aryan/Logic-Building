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
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        // Characteristics
        PNODE First;
        int iCount;

        // Behaviours
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no ,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int ipos);

        void Display();
};

/*
Return_Value Class_Name :: Function_Name(Parameters)
{

}
*/

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int no)
{
    //Step 1 : Allocate memory for node
    PNODE newn = new NODE;

    //Step 2 : Initialise node
    newn->data = no;
    newn->next = NULL;

    //Step 3 : Check if LL is empty or not
    if(First == NULL)   //if(iCnt == 0)
    {
        First = newn;
        iCount++;
    }
    else //If LL contains atleast one node
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

void SinglyLL :: InsertLast(int no)
{
    //Step 1 : Allocate memory for node
    PNODE newn = new NODE;

    //Step 2 : Initialise node
    newn->data = no;
    newn->next = NULL;

    //Step 3 : Check if LL is empty or not
    if(First == NULL)   //if(iCnt == 0)
    {
        First = newn;
        iCount++;
    }
    else //If LL contains atleast one node
    {

    }
}

void SinglyLL :: InsertAtPosition(int no, int ipos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPosition(int ipos)
{}

void SinglyLL :: Display()
{

}

int main()
{
    SinglyLL obj1;
    
    cout<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    
    obj1.Display();

    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
    
    obj1.Display();

    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    return 0;
}