//Display odd factors

// 1

//Odd Factors Display
//Input no and display Odd factors
//TIME Complexity

#include<stdio.h>

//O(N/2)

void DisplayOddFactors(int iNo)
{
    
     
    int iCnt = 0;
    printf("Odd Factors are : \n");
    //    1       2          3 
    for(iCnt=1; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 != 0))    //4
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

    DisplayOddFactors(iValue);

    return 0;
}
