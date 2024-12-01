// Check Perfect using recursion
#include<stdio.h>
#include<stdbool.h>

bool ChkPerfect(int No)
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

        ChkPerfect(No);
    }
    if(iSum == No)
    {
        return true;
    } 
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = ChkPerfect(iValue);
    if(iRet == true)
    {
        printf("%d Number is a Perfect Number\n",iValue);
    }
    else
    {
        printf("%d Number is not a Perfect Number\n",iValue);
    }
    
    return 0;
}