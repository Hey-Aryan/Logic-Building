//Accept one number from user and print that number of * on screen
//while loop

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = iNo;      //1
    while(iNo>=1)    //2
    {
        printf("*\n");    ///4
        iNo--;      //3
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}