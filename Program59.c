//Check number from user and check weather it is palindrome
#include<stdio.h>
#include<stdbool.h>

int ChkPalindrome(int iNo)
{
    int iDigit = 0, iRev =0;
    int iTemp = iNo;          //Xerox of iNo

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
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
    int iValue = 0;
    bool iRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = ChkPalindrome(iValue);

    if(iRet == true)
    {
        printf("%d is a palindrome number\n",iValue);
    }
    else
    {
        printf("%d is not a palindrome number\n",iValue);
    }

    return 0;
}