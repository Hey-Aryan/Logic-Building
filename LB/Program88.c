//Pattern Printing ---> - - - -> _______>  ::::::::::> *********>
//input 4 output * * * *
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
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
