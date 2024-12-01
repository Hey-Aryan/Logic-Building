//Display 1 2 3 4 5 using while loop// user defined
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    iCnt = 1;         //1
    while(iCnt<=iValue)       //2
    {
        printf("Marvellous %d\n",iCnt);   //4
        iCnt++;   //3
    }

}

int main()
{
    int iNo = 0;
    printf("Enter numbers you want to display\n");
    scanf("%d",&iNo);

    Display(iNo);
    return 0;
}

