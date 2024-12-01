//Simpiler version of odd and even
//Accept number from user and checek whether number is even or odd

#include<stdio.h>


void ChkEven(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("%d is an even number\n",iNo);
    }
    else
    {
       printf("%d is an odd number\n",iNo);
    }
    
}

int main()
{
    int iValue = 0;
 

    printf("Enter number\n");
    scanf("%d",&iValue);

    ChkEven(iValue);

    return 0;

}