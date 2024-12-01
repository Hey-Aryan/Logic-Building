//Accept N numbers from user and accept Range, Display all elements 
//from that range

//Input N     : 6
//      Start : 60
//      End   : 90
//Elements    : 85 66 3 76 93 88
//Output      : 66 76 88



#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iNo1,int iNo2)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt<iSize ; iCnt++)
    {
        if((Arr[iCnt]>=iNo1) && (Arr[iCnt]<=iNo2) )
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");    
}

int main()
{
    int * ptr = NULL;
    int iLength = 0, iValue1 = 0,iValue2 = 0;
    int iCnt = 0;

    printf("Enter number of Elements in the array :\n");
    scanf("%d",&iLength);

    printf("Enter the Statrting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending point :\n");
    scanf("%d",&iValue2);

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

    Range(ptr,iLength,iValue1,iValue2);

    free(ptr);

    return 0;
}