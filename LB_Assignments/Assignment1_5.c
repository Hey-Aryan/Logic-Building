//5 //Accept one number from user and print that number of * on screen

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt=1; iCnt<= iNo; iCnt++)
    {
        printf("*%d\n",iCnt);
    }
}    
int main()
{
    int iValue = 0;
    printf("Enter number of stars you want to print\n");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}