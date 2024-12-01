//Write a program to find factorial of given number 
//Time Complexity (N)
#include<stdio.h>
int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0,iAns=1;
    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        iAns = iCnt * iAns;
    }
    return iAns;
}
int main()
{
    int iValue =0,iRet =0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Fatctorial of number is %d\n",iRet);

    return 0;
}