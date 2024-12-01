//Accept n numbers in array as well as another number and find the l\
//last occurance in that array   
//problem 85 using array travelsal straight ----->

#include<stdio.h>
#include<stdlib.h>

int CheckLastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0,iPos = -1;
// .   1 .            2 .         4 .  
    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)//3 .  
        {
            iPos = iCnt;
        }
    }
    return iPos;
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