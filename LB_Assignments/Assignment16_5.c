//Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iSize)
{
    int iCnt = 0, iMult = 1;
    for(iCnt =0; iCnt<iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = Arr[iCnt]*iMult;
        }
    }
    return iMult;
}

int main()
{
    int * ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of Elements :\n");
    scanf("%d",&iLength);

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

    iRet = Product(ptr,iLength);

    printf("Product of all odd numbers is %d\n",iRet);
  
    free(ptr);

    return 0;
}