//Input from user // Non factors 
//Additions of that Nonfactors

 
#include<stdio.h>

int SumNonFactors(int iNo)
{
     
    int iCnt = 0;
    int iSum = 0;
    //    1       2          3 
    for(iCnt=1; iCnt <iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)    //4
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFactors(iValue);
    printf("Summation of Nonfactors %d is %d\n",iValue,iRet);

    return 0;
}