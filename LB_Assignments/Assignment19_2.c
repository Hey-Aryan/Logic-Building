//Input: iRow = 4  iCol = 3
//Output    1   2   3
//          1   2   3
//          1   2   3
//          1   2   3

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i =0,j=0;

    for(i=0;i<iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0,iValue2 =0;

    printf("Enter no. of Rows :\t");
    scanf("%d",&iValue1);

    printf("Enter no. of Columns :\t");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}