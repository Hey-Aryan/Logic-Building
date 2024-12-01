//Accept N numbers from user and return the difference between the smallest and largest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt = 0,iMin = Arr[0],iMax=Arr[0];
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
        else if(Arr[iCnt]>iMax);
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax-iMin;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0,iLength = 0,iRet = 0;

    printf("Enter the number of Elements:\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int)*iLength);

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements :\n",iLength);
    for(iCnt =0;iCnt< iLength;iCnt++)
    {
        printf("Enter element %d :\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }


    iRet = Difference(ptr,iLength);

    printf("Difference between Largets and Smallest number is : %d\n",iRet);

    free(ptr);

    return 0;
}