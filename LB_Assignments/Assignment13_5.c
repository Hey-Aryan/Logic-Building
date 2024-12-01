//Write a program which accept number from user and return the difference between summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iCnt = 0, iEven = 0, iOdd = 0;
    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 == 0)
        {
            iEven = iDigit + iEven;
        }
        else
        {
            iOdd = iDigit + iOdd;
        }
        iNo = iNo/10;
    } 
    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between even and odd summation is  = %d\n",iRet);

    return 0;
}