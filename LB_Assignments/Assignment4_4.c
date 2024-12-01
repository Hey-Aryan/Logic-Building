//4//Write a proggrgam which accept number from user and return summation of all its non factors.
//Time Complexity = (N)

#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }    
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);

    printf("Addition of no factors is :%d\n",iRet);

    return 0;
}

