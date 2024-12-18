//Count SMALL Characters using Recursion
#include<stdio.h>

int CountSmlR(char *str )
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        CountSmlR(str);
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    iRet = CountSmlR(Arr);

    printf("String length is : %d\n", iRet);

    return 0;
}