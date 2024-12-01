#include<stdio.h>

int main()
{
    int a = 1234;
    int b = 10;
    int iDigit = 0;
    int Ans = 0;
     
    while(a != 0)
    {
        iDigit = a % b;
        printf("%d\n",iDigit);
        a = a/10;
    }
    
    return 0;
}