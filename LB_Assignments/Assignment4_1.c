//1// Write a program which accept number from user and display its multiplication of factors
#include<stdio.h>
//Time Complexcity  //(N/2)

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1; iCnt<=iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
           iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is :%d\n",iRet);

   
    return 0;
}