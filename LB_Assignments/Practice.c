#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize) //     subscript operator
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum/iSize);
}

int main()
{
    int iLength = 0, iCnt =0;
    float fRet = 0.0f;
    int *ptr = NULL;

    printf("Enter no. of elements :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(sizeof(int)*iLength);

    printf("Enter Elements :\n");
    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are:\n");
    for(iCnt = 0; iCnt<iLength;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }  

    fRet = Average(ptr,iLength);

    printf("Average of all the elements is %f\n",fRet);

    return 0;
}
    
