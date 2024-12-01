//Write a program which accept two numbers and check whether 
//numbers are equal or not

#include<stdio.h>
typedef int BOOL;
#define true 1
#define false 0


BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    BOOL iRet = false;
    printf("Please Enter two numbers\n");
    scanf("%d %d",&iValue1,&iValue2);
    
    iRet = ChkEqual(iValue1,iValue2);

    if(iRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    return 0;
}