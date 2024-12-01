//Accept one character from user and convert casae of that character
#include<stdio.h>
#include<ctype.h>
void DisplayConvert(char CValue)
{
    if( CValue >=65 && CValue <=90)
    {
        CValue = CValue + 32;
        printf("Lower case of Entered character is %c\n",CValue);

    }
    else if( CValue >=97 && CValue <=121)
    {
        CValue = CValue - 32;
        printf("Upper case of Entered character is %c\n",CValue);
    }
    

}

int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}