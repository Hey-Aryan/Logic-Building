#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))  //Empty LL
    {
        *First = * Last = newn;
        (*Last) ->next= *First;     //no side effects write this anywhere
    }
    else        //LL conatins at least one node
    {
        newn->next = *First;
        *First = newn;
        (*Last) ->next= *First;    //used to maintain circular nature
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))  //Empty LL
    {
        *First = * Last = newn;
        (*Last) ->next= *First;
    }
    else        //LL conatins at least one node
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);
    
    Display(Head, Tail);

    return 0;
}