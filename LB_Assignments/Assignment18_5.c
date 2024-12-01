// Input : 8
// Output : 2   4   6   8   10  12  14  16
//Time Complexcity = n
//without using if condition
#include <stdio.h>

void EvenPattern(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2;iCnt<=2*iNo;iCnt+=2)
    {
       
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    EvenPattern(iValue);

    
    return 0;
}