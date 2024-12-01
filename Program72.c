//Accept n numbers of users and reture the average of that number.
#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr,int iSize) .   pointer representation
//////////same as below////////////
float Average(int Arr[],int iSize)       //sub script operator
{
    int iSum =0, iCnt =0;
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum/iSize);
}

int main()
{
    int iLength = 0, i =0;
    int *ptr = NULL;   //malloc return value store karnyasathi lagnara pointer
    float fRet = 0.0f;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);
        //typecast       //making slices of block this gives void * which needs to br typecast
    ptr = (int*)malloc(iLength * sizeof(int));
    // ptr = (int *)malloc(5*4) 
    printf("Please Enter the numbers :\n");
    for(i= 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    //fRet = Average(500,5)
    fRet = Average(ptr,iLength);    //call by address
    printf("Average is : %f\n",fRet);

    free(ptr);  //resource deallocation 
    //free(500)

    return 0;
}