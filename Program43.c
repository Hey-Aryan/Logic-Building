//   3
//Even Factors Display
//Input no and display even factors
//TIME Complexity

#include<stdio.h>

//////////////////////
//     
//      O(N/4)
//
//////////////////////
void DisplayEvenFactors(int iNo)
{
    
     
    int iCnt = 0;
    printf("Even Factors are : \n");
    //    1       2          3 
    for(iCnt=2; iCnt <=(iNo/2); iCnt+=2)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))    //4
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

    DisplayEvenFactors(iValue);

    return 0;
}