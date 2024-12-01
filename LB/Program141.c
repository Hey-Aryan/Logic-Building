//Accept string from user and calculate frequency of Capital letters
//to display length of string
#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    while(*str !='\0')
    {
        if((*str>='A' )&&(*str<='Z'))
        {
            iCnt++;
        }
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

    iRet = CountCapital(Arr);  

    printf("Frequency of a is : %d\n",iRet);

    return 0;
}