//Doubley Singly Linked List
//Insert First
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node //20bytes
{
    int data;
    struct node *next;
    struct node *prev;    //X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = no;
    newn ->next = NULL;
    newn ->prev = NULL;   //X

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;  //X
        *First = newn;
    }
}


Display()
{}

Count()
{}

int main()
{
    PNODE Head = NULL;

    
    return 0;
}
