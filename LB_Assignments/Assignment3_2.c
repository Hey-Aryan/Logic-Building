//Write a program which accept number from user and print factors of that number

#include<stdio.h>

void DisplayFactor(int iNo)
{
    /*
    (8 % 1) == 0
    (8 % 2) == 0
    (8 % 3) == 2
    (8 % 4) == 0
    (8 % 5) == 3
    (8 % 6) == 2
    (8 % 7) == 1
    */
     
    int iCnt = 0;
    if(iNo<=0)
    {
        iNo = -iNo;
    }
    printf("Factors are : \n");
    //    1       2          3 
    for(iCnt=0; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt == 0))    //4
        {
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
}
