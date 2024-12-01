//Take n number from user and display n numbers using recursion and command line arguments
#include<stdio.h>
#include<stdlib.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;
    
    if(iCnt<=iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}
int main(int argc,char *argv[])
{
    int iValue = 0;
    //Convertng string type to interger type
    iValue = atoi(argv[1]);

    printf("Entered Number is : %d\n",iValue);
    printf("Size of number is  : %lu\n",sizeof(iValue));

    printf("Program name is : %s\n",argv[0]);

    printf("--------\n");
    DisplayR(iValue);
    printf("--------\n");
    
    return 0;
}