//Mutiply n numbers from user      //////////////////////////
//4                               /// Recursion Approach ///
//4*3*2*1 = 24                   //////////////////////////

#include<stdio.h>

int Factorial(int No)                 
{                               
    static int Sum = 1;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Sum = iCnt * Sum;
        iCnt++;
        Factorial(No);
    }

    return Sum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Addition of Numbers is: %d\n",iRet);
    
    return 0;
}
