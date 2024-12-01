//Accept N numbers from user and check whether it contains 11 or not 
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            return TRUE;
            break;
        }
        else{
            return FALSE;
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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
    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present \n");
    }
    else{
        printf("11 is not present \n");
    }

    free(p);
    return 0;
}
