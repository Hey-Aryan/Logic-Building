//take character from user and display capital or small

#include<stdio.h>

char ToUpperX(char ch)
{
    return ch -32;
}

int main()
{
    char cValue = '\0', cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);

    printf("Character in upper case is : %c\n",cRet);

    return 0;
}