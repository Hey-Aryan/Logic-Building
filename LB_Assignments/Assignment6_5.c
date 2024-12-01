//Write a program which accepts total marks and obtained marked from
//user and calculate percentage

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float Ans = 0.0f;
    Ans = (float)iNo2/iNo1*100.0;
    printf("%f\n",Ans);
    return Ans;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet =0.0f ;
    printf("Please enter total Marks\n");
    scanf("%d",&iValue1);
    printf("Please enter obtained Marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Obtained Percntage is :%f\n ",fRet);

    return 0;
}