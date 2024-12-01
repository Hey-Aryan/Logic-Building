//Write a program which accept number from user and if the number is less than 50 then print small,if it is freater than 50 and less tham 100 then print medium, if it is greater than 100 then print large
//timeComplexity(N)
#include<stdio.h>

void Number(int iNo)
{
    if(iNo<=50)
    {
        printf("small\n");
    }
    if(iNo>50 && iNo<=100)
    {
        printf("medium\n");
    }
    if(iNo>100)
    {
        printf("large\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}