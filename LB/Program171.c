#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//better readability
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));   //1 allocate memory

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) //If linked list is empty
    {
        *First = newn;
    }
    else              //If linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));   //1 allocate memory

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) //If linked list is empty
    {
        *First = newn;
    }
    else              //If linked list contains atleast one node
    {

    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");
    while(First != NULL)
    {
        printf("|%d| -> ",First->data);
        First = First -> next;
    }
    printf(" NULL\n");
}


int main()
{
    int iRet = 0;
    //struct node * Head = NULL;
    PNODE Head = NULL;

    InsertFirst(&Head, 51); //InsertFirst(60,51) 
    InsertFirst(&Head, 21); //InsertFirst(60,21)
    InsertFirst(&Head, 11); //InsertFirst(60,11)

    Display(Head);

    iRet = Count(Head);
    printf("Number of node in are : %d\n",iRet);

    return 0;
}

/*  
    //Call by Address

    InsertFirst()         //always success
    InsertLast()          //always success
    InsertAtPosition()    //false if position is wrong  

    DeleteFirst()
    DeleteLast()
    DeleteAtPosition()

    //Call by Value

    Display()
    Count()
*/