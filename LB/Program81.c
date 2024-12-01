//Accept n numbers and another number and return the first index at which that number occurs else return -1

#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CalculateOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iFrequency = 0;
// .   1 .            2 .         4 .  
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)//3
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
    
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0,iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the index of first occurance : \n");
    scanf("%d",&iValue);

    iRet = CalculateOccurance(ptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
        printf("%d is  occuranced in the array at index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;
}