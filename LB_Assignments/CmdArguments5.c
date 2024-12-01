//Display Array using cmd arguments and  recursion

#include<stdio.h>
#include<stdlib.h>

void DisplayR(int Arr[],int iSize)
{
    static int iCnt = 0;
    if(iCnt<iSize)
    {
        printf("%d\t",Arr[iCnt]);
        iCnt++;
        DisplayR(Arr,iSize);
    }
}

int main(int argc,char * argv[])
{
    int iLength = 0,iCnt = 0,j=0,k=0;
    int * ptr = NULL;
   
    iLength = atoi(argv[1]);
    printf("Entered Length of array is : %d\n",iLength);

    ptr = (int *)malloc(sizeof(int)*iLength);

    for(j = 0;j<iLength;j++)
    {
        ptr[j]=argv[j+2];
    }

    for(k = 0;k<iLength;k++)
    {
        ptr[k]=atoi(argv[k+2]);
    }
/*
    ptr[0]=atoi(argv[2]);
    ptr[1]=atoi(argv[3]);
    ptr[2]=atoi(argv[4]);
    ptr[3]=atoi(argv[5]);
    ptr[4]=atoi(argv[6]);
*/
    printf("Entered Elements are :\n");
    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        printf("  : %d\n",ptr[iCnt]);
    }
    printf("_____________________________________________\n");
    DisplayR(ptr,iLength);
    printf("\n");
    printf("_____________________________________________\n");


    free(ptr);

    return 0;
    


}