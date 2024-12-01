//Accept a character from user and check whether that character is vowel
// (a,e,i,o,u) or not 
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char ch)
{
    if(ch ==97 || ch==101 || ch==105 || ch==111 || ch==117 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;   //initialisation

    printf("Enter character\n");
    scanf("%c",&cValue);  // characteristic 

    bRet = ChkVowel(cValue);   //function call

    if(bRet == TRUE)    // if else 
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }

    return 0;
}