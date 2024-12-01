// Count nnumbers using recursion
#include<stdio.h>
#include<stdbool.h>

int CountDigitsR(int No)
{
    int Digit = 0;
    static int iCnt = 0;

    if(No != 0)
    {
        iCnt ++;
        No = No/10;
        CountDigitsR(No);
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

   iRet = CountDigitsR(iValue);

   printf("Number of digits are : %d\n",iRet);
    
    return 0;
}