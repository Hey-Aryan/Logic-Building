//Display descending order

#include<stdio.h>

void DescendingOrder(int iNo)
{
    int iCnt = 0;
    printf("----------------------\n");
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        printf("%d\n",iCnt);
    }
    printf("----------------------\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DescendingOrder(iValue);

    return 0;
}