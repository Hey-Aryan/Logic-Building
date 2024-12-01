//VAriation = 2
//Accept n numbers from user and display even odd count and odd count
//Accept n number from user and check how many even numbersr there
#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
void DisplayEvenOddCount(int Arr[], int iSize)
{
    int iCnt =0,iEvenCnt=0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if ((Arr[iCnt] %2)==0)
        {
            iEvenCnt++;
        }
    }
    printf("Count of even numbers is :%d\n", iEvenCnt);
    printf("Count of odd numbers is :%d\n", iSize - iEvenCnt);

}  

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // Step 4 : Call the function
    DisplayEvenOddCount(ptr, iLength);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}