//Accept N numbers from user and return frequency of even numbers 
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
           iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(sizeof(int)*iSize);

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements :\n",iSize);
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    iRet = CountEven(p,iSize);

    printf("Number of Even elements is %d\n",iRet);

    free(p);
    return 0;
}
