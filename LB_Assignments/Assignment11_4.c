//Write a program which accept range from user and display all the addition of even numbers in that range
//time complexity = (N/2)
#include<stdio.h>
int RangeSumEven(int iNo1, int iNo2)
{
    int iCnt = 0, iAns = 0;

    if(iNo1<0||iNo2<0)
    {
        return 0;
    }

    if(iNo1 %2 != 0)
    {
        iNo1++;
    }

    for(iCnt =iNo1; iCnt <=iNo2;iCnt+=2)
    {
        iAns = iAns + iCnt;
    }
    return iAns;
}
int main()
{
    int iValue1 =0, iValue2=0,iRet =0;

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);
    if(iRet<=0)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is : %d\n",iRet);
    }
   
    return 0;
}