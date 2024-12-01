//3// Write a program which accept number from user and display all its Non factors 
//Time Complexcity = N
#include<stdio.h>

void NonFact(int iNo)
{
    printf("--------\n");
    int iCnt = 0;
    for(iCnt =1; iCnt<iNo;iCnt++)
    if(iNo % iCnt != 0)
    {
        printf("%d\n",iCnt);
    }
     printf("--------\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
