//Write a program which accept number from user and display below pattern on screen
//time complexity (N=2)
#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for (iCnt=1; iCnt<=iNo;iCnt++)
    {
        printf(" * ");
    }
    for (iCnt=1; iCnt<=iNo;iCnt++)
    {
        printf(" # ");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
