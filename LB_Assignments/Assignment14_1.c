//Accept N numbers from user and retirn difference between summation of even elements and summation of odd elements
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt = 0, iEven = 0,iOdd = 0, iDiff = 0;
    for(iCnt = 0;iCnt<iLength;iCnt ++)
    {
        if((Arr[iCnt]) % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }

    iDiff = iEven - iOdd;
    return iDiff;
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int * p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int)*iSize);

    if(p==NULL)       //filter
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}