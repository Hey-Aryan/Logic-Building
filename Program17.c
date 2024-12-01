//Display Jay Ganesh iValue times
//Demonstration of Iteration using For loop
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    
    //      1        2       3     
    for(iCnt = 1; iCnt<=iValue; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }

}

int main()
{
    int iNo = 0;

    printf("Enter no. of iterations :\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}