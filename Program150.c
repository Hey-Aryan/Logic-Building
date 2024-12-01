//take character from user and Toggle

#include<stdio.h>

char Toggle(char ch)
{
    if((ch>= 'A') && (ch<='Z'))
    {
        return ch +32;
    }
    else if((ch>= 'a') && (ch<='z'))
    {
        return ch -32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0', cRet = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = Toggle(cValue);

    printf("Character in opposite case is : %c\n",cRet);

    return 0;
}