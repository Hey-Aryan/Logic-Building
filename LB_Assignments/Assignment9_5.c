// Write a program which returns difference between Even Factorial and odd factrorial
//intput =5 . output= -7 (8-15)
//time complexity(N2) . -----> .  (N2/2) 

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0,iEven=1, iOdd=1, iAns =0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=iNo;iCnt>=2;iCnt-=2)
    {
        if(iCnt%2==0)
        {
            iCnt --;
        }
        if(iCnt%2!=0)
        {
            iOdd = iCnt * iOdd;
        }
    }
    for(iCnt=iNo;iCnt>=2;iCnt-=2)
    {
        if(iCnt%2!=0)
        {
            iCnt --;
        }
        if(iCnt%2==0)
        {
            iEven = iCnt * iEven;
        }
    }
    iAns = iEven - iOdd;
    return iAns;
}

int main()
{
    int iValue = 0,iRet =0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}