//Accept N numbers from user and accept one another number as No,
//and return index of first occurancce of that No.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOcc(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    printf("%d\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else{
        return iCnt;
    }
    
}

int main()
{
    int * ptr = NULL;
    int iLength = 0, iValue = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of Elements :\n");
    scanf("%d",&iLength);

    printf("Enter the Value you wanna search :\n");
    scanf("%d",&iValue);

    ptr = (int *)malloc(sizeof(int)*iLength);

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d Elements \n",iLength);
    for(iCnt = 0 ;iCnt < iLength; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FirstOcc(ptr,iLength,iValue);

    if(iRet == -1)
    {
        printf("%d is not present.\n",iValue);
    }
    else
    {
        printf("%d is present at %d index,\n",iValue,iRet);
    }

    free(ptr);

    return 0;
}