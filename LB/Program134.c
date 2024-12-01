//to display length of string
#include<stdio.h>

int strlenX(char *str)
{
    int iCnt = 0;
    while(*str !='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);  //strlen(100)

    printf("Number of character are %d\n",iRet);

    return 0;
}