//Add n numbers from user       /////////////////////
//4                             // Normal Approach //
//4+3+2+1 = 10                  /////////////////////

#include<stdio.h>

int AdditionI(int No)                 
{                               
    int Sum = 0;
    int iCnt = 1;

    while(iCnt <= No)
    {
        Sum = iCnt + Sum;
        iCnt++;
    }
    return Sum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = AdditionI(iValue);

    printf("Addition of Numbers is: %d\n",iRet);
    
    return 0;
}
