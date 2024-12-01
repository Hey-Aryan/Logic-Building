#include<stdio.h>

void DisplayR(int No)                 
{                               
    static int iCnt = 1;               

    if(iCnt <= No)
    {
        printf("*\n");
        iCnt++;
        DisplayR(No);    //Recursive Call
    }
}

int main()
{
    int Value = 0;
    printf("Enter the number: \n");
    scanf("%d",&Value);
    DisplayR(Value);
    printf("End of main\n");

    return 0;
}
