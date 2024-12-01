//Write a program which accept number from user and return difference 
//between summation of all its factors and non factors
//Time Complexity for 1st for loop = (N/2)
//Time Complexity for 2st for loop = (N)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;
    int iDiff = 0;

    for(iCnt =1; iCnt<=iNo/2; iCnt++)   
    if(iNo % iCnt == 0)
    {
        iFact = iFact + iCnt;
    }

    for(iCnt =1; iCnt<iNo; iCnt++)
    if(iNo % iCnt != 0)
    {
        iNonFact = iNonFact + iCnt;
    }

    iDiff = iFact - iNonFact;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the numebr :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference between summation of Factors and NonFactors is :%d\n",iRet);


    return 0;
}
