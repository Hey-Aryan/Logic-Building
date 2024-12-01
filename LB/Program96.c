//input 4 
//output A B C D

#include<stdio.h>

void Display(int iNo)
{
    int iCnt;
    char ch = 'A';
    if(iNo<0)     //updater
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt <=iNo;iCnt++)
    {
        printf("%c\t",ch++);  //Dynamic data (variable data)
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
