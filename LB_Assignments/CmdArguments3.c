//Take number from user and display using cmd arguments and recurision
#include<stdio.h>
#include<stdlib.h>

void FactorsR(int iNo)
{
    static int iCnt = 1;
    if(iCnt<=iNo/2)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorsR(iNo);
    }
}
int main(int argc,char * argv[])
{
    int iValue = 0;
    iValue = atoi(argv[1]);

    printf("Entered Number is %d\n",iValue);

    FactorsR(iValue);
    return 0;
}