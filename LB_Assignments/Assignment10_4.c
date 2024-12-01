//Write a program which accept tempersture in Fahrenheit and conevrt it into celsius
//(1 celsius = (Farhrenheit - 32 ) * (5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    if (fTemp<0)
    {
        fTemp = - fTemp;
    }
    double dAns = 0.0;
    dAns = (fTemp -32) * (0.5555555);
    return dAns;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter the temperature  in farhrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    printf("Temperature in degree celsius is %lf\n",dRet);
    return 0;
}