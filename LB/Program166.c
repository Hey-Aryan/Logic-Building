//Data Structures 5
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1) //Jannnat
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    //Step 1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    //Step 2: Initialise the node
    newn->data = No;
    newn->next = NULL;

    //Step3: Check Linked list is empty or not
    if(*First == newn)
    {
        *First = newn;
    }
    else     //If linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    //Logic
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}

