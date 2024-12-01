//Count digits using recursion and cmd args
#include<stdio.h>
#include<stdlib.h>

int CountDigitsR(int iNo)
{
    static int iCnt = 0;

    if(iNo != 0)
    {
        iNo = iNo/10;
        iCnt++;
        CountDigitsR(iNo);
    }
    return iCnt;
}
int main(int argc,char * argv[])
{
    int iValue = 0;
    int iRet = 0;
    iValue = atoi(argv[1]);

    printf("Entered number is : %d\n",iValue);

    iRet = CountDigitsR(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}
