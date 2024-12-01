//Display 1 2 3 4 5 using forloop// user defined
#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    //     1           2          3
    for(iCnt=1; iCnt<=iValue; iCnt++)
    {
        printf("Marvellous %d\n",iCnt);   //4
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

