//Variation 2

//input 4 
//output 1 * 2 * 3 * 4 *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0)     //updater
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);  //Dynamic data (variable data)
        printf("*\t");   //static data(fixed data)

    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
