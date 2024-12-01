// Addition of Factors using recursion
#include<stdio.h>

int FactorsR(int No)
{
    static int iCnt = 1;
    static int iSum = 0;

    if( iCnt <= (No/2) )
    {
        if((No % iCnt) == 0)
        {
            iSum = iCnt + iSum;
        }
        iCnt++;

        FactorsR(No);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = FactorsR(iValue);

    printf("Value of Addition of Factors are: %d\n",iRet);
    
    return 0;
}