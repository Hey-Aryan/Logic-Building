//Variation 2
//Complexity N-something
#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;
// .   1 .            2 .         4 .  
    for(iCnt = iSize-1; iCnt >=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)//3 .  
        {
            break;
        }
    }
    return iCnt;
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

    printf("Enter the element to findout the last occurance : \n");
    scanf("%d",&iValue);

    iRet = CheckLastOccurance(ptr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);
    }
    else
    {
        printf("%d is  occuranced in the array at last index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;
}