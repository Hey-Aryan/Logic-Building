//Write a program which accept area in square feet and conevrt it into square meter.
//(1 square feet = 0.00929 Square meter)

#include<stdio.h>

double SquareMeter(int iValue)
{
   
    double dAns = 0.0;
    dAns = iValue * 0.0929;
    return dAns;
}
int main()
{
    int ivalue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet : \n");
    scanf("%d",&ivalue);

    dRet = SquareMeter(ivalue);
    printf("Area in square meter is %lf\n",dRet);
    return 0;
}