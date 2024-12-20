//Insert First
//Insert Last
//Display
//Count
//deletefirst
//deletelast

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      // X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;  // X

        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;      // X
    }
}

void Display(PNODE First)
{
    printf("Elements of Linked list are\n");

    printf("NULL<=> ");

    while(First != NULL)
    {
        printf("| %d |<=> ",First->data);
        First = First->next;
    }
    printf("NULL \n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }

    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)  // LL is empty
    {
        return;
    }
    else if((*First)->next == NULL) // LL contains 1 node
    {
        free(*First);
        *First = NULL;
    }
    else    // LL contains more than 1 node
    {
        *First = (*First) -> next;
        free((*First)->prev);               // X
        (*First)->prev = NULL;              // X
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)  // LL is empty
    {
        return;
    }
    else if((*First)->next == NULL) // LL contains 1 node
    {
        free(*First);
        *First = NULL;
    }
    else    // LL contains more than 1 node
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    Display(Head);

    InsertFirst(&Head,21);
    Display(Head);

    InsertFirst(&Head,11);
    Display(Head);

    InsertLast(&Head,101);
    Display(Head);

    InsertLast(&Head,111);
    Display(Head);

    InsertLast(&Head,121);
    Display(Head);

    iRet = Count(Head);
    printf("Number of elelemnts are : %d\n",iRet);

    DeleteFirst(&Head);
    DeleteLast(&Head);

    Display(Head);

    iRet = Count(Head);
    printf("Number of elelemnts are : %d\n",iRet);
    
    return 0;
}