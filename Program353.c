//Add n numbers from user       ////////////////////////
//4                             // Recursion Approach //
//4+3+2+1 = 10                  ////////////////////////

#include<stdio.h>

int AdditionR(int No)                 
{                               
    static int Sum = 0;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Sum = iCnt + Sum;
        iCnt++;
        AdditionR(No);
    }

    return Sum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = AdditionR(iValue);

    printf("Addition of Numbers is: %d\n",iRet);
    
    return 0;
}
