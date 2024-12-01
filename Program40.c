//Display descending order
//while loop

#include<stdio.h>

void DescendingOrder(int iNo)
{
    int iCnt = 0;
    printf("----------------------\n");
    iCnt = iNo;   //1
    while(iCnt>=1)   //2
    {
        printf("%d\n",iCnt);  //3
        iCnt--;    //4
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