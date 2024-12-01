// Write a program to find odd factorial of given number
//enter no say 10 output = 945(9*7*5*3*1)
//time complexity(N) . ---> . (N/2)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0,iAns =1;
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
            iAns = iCnt * iAns;
        }
    }
    return iAns;
}

int main()
{
    int iValue = 0,iRet =0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n",iRet);

    return 0;
}