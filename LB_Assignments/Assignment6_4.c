//Write a program which accept three numbers and print its multiplication

#include<stdio.h>
#define false 0


int Multiply(int iNo1,int iNo2,int iNo3)
{
    int Ans = 0;
    Ans = iNo1*iNo2*iNo3;
    return Ans;
        
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    int iRet = 0;

    printf("Please Enter three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    
    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of three numbers is :%d\n",iRet);

    
    return 0;
}