//Add n Numbers from user usinf recursive and Command line argument
#include<stdio.h>
#include<stdlib.h>

int AdditionR(int iNo)
{
    static int iCnt = 0;
    static int iSum = 0;

    if(iCnt<=iNo)
    {
        iSum = iCnt + iSum;
        iCnt++;
        AdditionR(iNo);
        
    }
    return iSum;
}

int main(int argc, char * argv[])
{
    int iValue = 0, iRet = 0;
    printf("-----------------------------------------------\n");


    printf("Number of Arguments Entered are : %d\n",argc - 1);
    printf("-----------------------------------------------\n");


    if(argc > 2)
    {
        printf("Please enter only one argument !!\n");
        printf("Argument Considered is : %s\n",argv[1]);
    }
    
    printf("-----------------------------------------------\n");

    iValue = atoi(argv[1]);
    printf("Entered Value is = %d\n",iValue);

    iRet = AdditionR(iValue);
    printf("-----------------------------------------------\n");
    printf("Addition of %d numbers = %d\n",iValue,iRet);
    printf("-----------------------------------------------\n");


    return 0;
}