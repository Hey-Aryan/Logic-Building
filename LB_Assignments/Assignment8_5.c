//Write a program which accepts number from user and display its table in reverse
//Time Complexity (N)
#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0,iAns = 0;
    for(iCnt = 10;iCnt>0;iCnt--)
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
    TableRev(iValue);
    printf("--------\n");

    return 0;
}