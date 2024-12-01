//Write a program which accept radius of circle radius of circle from user and calculate its area.
//Consider value of PI as 3.14(Area = PI * Radius * Radius)

#include<stdio.h>

double CircleRadius(float Radius)
{
    double dAns = 0.0;
    dAns = 3.14*Radius*Radius;
    return dAns;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter radius of the circle :\n");
    scanf("%f",&fValue);

    dRet = CircleRadius(fValue);

    printf("Area of the circle is %lf square meter.\n",dRet);
    

    return 0;
}