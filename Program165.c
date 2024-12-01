//Data Structures 4
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
    //Logic
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


//call by address changes data in main
//function
/*
    void InsertFirst(PPNODE First,int No)                //call by address 
    void InsertLast(PPNODE First,int No)                 //call by address
    void InsertAtPos(PPNODE First,int No, int Pos)       //call by address

    void DeleteFirst(PPNODE First)                       //call by address
    void DeleteLast(PPNODE First)                        //call by address
    void DeleteAtPos(PPNODE First,pos)                   //call by address

    void Display(PNODE First)                            //call by value         
    int Count(PNODE First)                               //call by value
*/

//Function Calling

/*  
    InsertFirst(&Head,11)
    InsertLast(&Head,11)
    InsertAtPos(&Head,11,5)

    DeleteFirst(&Head)
    DeleteLast(&Head)
    DeleteAtPos(&Head,5)

    Display(Head)
    Count(Head)
*/


