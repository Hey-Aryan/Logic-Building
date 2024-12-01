//Accept two numbers from user and display first number in second number of times

#include<stdio.h>


void Display(int iNo, int iFrequency)
{
    printf("-----------------------------\n");
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
    printf("-----------------------------\n");

}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);


    return 0;
}