//Accept N numbers from user and display all such elements which are divisible by 5
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    printf("Elements divisible by 3 & 5 are :\n");
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(((Arr[iCnt]%3) == 0) && ((Arr[iCnt]%5) == 0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int * ptr = NULL;
    int iCnt = 0, iLenght = 0;

    printf("Enter no of elements :\n");
    scanf("%d",&iLenght);

    ptr = (int *)malloc(sizeof(int)*iLenght);

    if(ptr == NULL)
    {
        printf("Unalble to allocate the memory\n");
    }

    printf("Enter %d elements\n",iLenght);

    for(iCnt = 0;iCnt < iLenght;iCnt ++)
    {
        printf("Enter element %d : ",iCnt+1);

        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLenght);

    free(ptr);

    return 0;
}
