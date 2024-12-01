//Take one digit and check weather it is a digit or not 

#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    if((ch >=48)&&(ch <=57))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one digit :\n");
    scanf("%c",&cValue);

    bRet = IsDigit(cValue);
    if(bRet == true)
    {
        printf("%c is a digit\n",cValue);
    }
    else
    {
        printf("%c is not a digit \n",cValue);
    }
    return 0;
}