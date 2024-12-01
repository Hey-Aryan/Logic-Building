//input 4 //output 4321
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0)     //updater
    {
        iNo = -iNo;
    }
    for(iCnt = iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");   // absoulety fabulous logic
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
