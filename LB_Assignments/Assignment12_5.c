//Write a program which accepts number from user and count frequency of digits which are less than 6

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCnt ++;
        }
        iNo = iNo /10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    
    printf("Frequency = %d\n",iRet);

    return 0;
}