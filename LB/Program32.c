//TIME Complexity
//Accept input from user and display factors 

#include<stdio.h>

//O(N/2)

void DisplayFactors(int iNo)
{
    
     
    int iCnt = 0;
    printf("Factors are : \n");
    //    1       2          3 
    for(iCnt=1; iCnt <=(iNo/2); iCnt++)
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