//Accept n number as well as another number and check weather 
//that n number is present that array or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
bool CalculateOccurance(int Arr[], int iSize, int iNo)
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
        return false;
    }  
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iValue = 0;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the occurance : \n");
    scanf("%d",&iValue);

    bRet = CalculateOccurance(ptr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is  occuranced in the array\n",iValue);
    }
    else
    {
        printf("There is no %d in the array\n",iValue);

    }

    free(ptr);

    return 0;
}