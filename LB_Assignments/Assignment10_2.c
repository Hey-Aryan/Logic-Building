//Write a program which accept weidth & height of rectangle from user and calculate its area. (Area = Width * Height)

#include<stdio.h>

double RectArea(float fHeight , float fWidth)
{
    double dAns = 0.0;
    dAns = fHeight* fWidth;
    return dAns;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;
    printf("Enter the height of rectangle : \n");
    scanf("%f",&fValue1);

    printf("Enter the weigth of rectangle : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of Rectangle is %lf\n",dRet);
    return 0;
}