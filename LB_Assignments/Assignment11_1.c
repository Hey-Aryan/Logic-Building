//Write a program which accept range from user and display all the numbers in between that range
//time complexity = (N)
#include<stdio.h>
void RangeDisplay(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1>iNo2)
    {
        printf("Invalid Range\n");
    }
    for(iCnt =iNo1; iCnt <=iNo2;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue1 =0, iValue2=0;

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point : \n");
    scanf("%d",&iValue2);

    

    RangeDisplay(iValue1,iValue2);
    printf("\n");

    return 0;
}
