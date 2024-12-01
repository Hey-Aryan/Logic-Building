//Accept N numbers from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
    int iCnt = 0,iMax = Arr[0];
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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


    iRet = Maximum(ptr,iLength);

    printf("Largest number is : %d\n",iRet);

    free(ptr);

    return 0;
}