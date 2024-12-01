//Write a program which accept N from user and print all odd numbers up to N
//time complexity (N/2)

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

        for (iCnt=1; iCnt<=iNo;iCnt+=2)
        {
            if(iCnt % 2 != 0)
            {
                printf("%d\t",iCnt);
            }
           
        }
    
}
        
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}