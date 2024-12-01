//Accept input from user and display factors 

#include<stdio.h>
// O(N)
void DisplayFactors(int iNo)
{
    /*
    (8 % 1) == 0
    (8 % 2) == 0
    (8 % 3) == 2
    (8 % 4) == 0
    (8 % 5) == 3
    (8 % 6) == 2
    (8 % 7) == 1
    */
     
    int iCnt = 0;
    printf("Factors are : \n");
    //    1       2          3 
    for(iCnt=1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)    //4
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}