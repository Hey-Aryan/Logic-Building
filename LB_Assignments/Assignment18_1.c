//Patter Printing
// Input : 5
// Output : A B C D E

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 0;iCnt <iNo;iCnt++)
    {
        printf("%c\t",ch++);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    
    return 0;
}