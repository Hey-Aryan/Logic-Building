//Write a program which accepts number from user and display its table
//Time Complexity (N)
#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0,iAns = 0;
    for(iCnt = 1;iCnt<=10;iCnt++)
    {
        iAns = iNo * iCnt;
        printf("%d\n",iAns);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);
    printf("--------\n");
    Table(iValue);
    printf("--------\n");

    return 0;
}