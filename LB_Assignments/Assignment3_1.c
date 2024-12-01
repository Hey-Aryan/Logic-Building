//Write a program which accept one number from user and print that number of even numbers on screen
#include<stdio.h>
//Time Complexity by half (N/2)
void PrintEven(int iNo)
{
    printf("================\n");
    int iCnt = 0;
    for(iCnt = 2; iCnt<=(iNo*2); iCnt+=2)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    printf("================\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}