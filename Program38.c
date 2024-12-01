//Input No and Display Table

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    printf("_____________________\n");
    printf("Table of %d is :\n",iNo);
    printf("_____________________\n");
    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }
    printf("_____________________\n");
}
int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}
