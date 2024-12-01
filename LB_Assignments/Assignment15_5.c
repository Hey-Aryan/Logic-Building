//Accept N numbers from user and return frequency of 11 
#include<stdio.h>
#include<stdlib.h>

int CheckFreq(int Arr[],int iLength,int iNo)
{
    int iCnt = 0, Freq = 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            Freq++;
        }
    }
    return Freq;
}

int main()
{
    int iSize = 0, iCnt = 0,iValue = 0;
    int *p = NULL;
    int iRet = 0;

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

    printf("Enter the Element:\n");
    scanf("%d",&iValue);

    iRet = CheckFreq(p,iSize,iValue);

    printf("Occurance of %d is %d times.\n",iValue,iRet);
    free(p);
    return 0;
}
