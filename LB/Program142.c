//Accept one string from user as well as one character and calcuate that occurance

#include<stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCnt ++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char cValue = '\0',Arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character you want to find th occurance of :\n");
    scanf("%c",&cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of letter : %d\n",iRet);

    return 0;
}