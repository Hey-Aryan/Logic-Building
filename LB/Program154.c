//Accept string from user and count the ni of white spaces
#include<stdio.h>

int CountSpaces(char * str)     // void function does not return but make changes in main function
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        str ++;
    }
    return iCnt;
}

int main() 
{
    char Arr[50], iRet = 0;

    printf("Please Enter string :\n");
    scanf("%[^'\n']s",Arr);
    iRet = CountSpaces(Arr); //strlwrX(100);  //call by address

    printf("No of white spaces is : %d\n",iRet);    

    return 0;
}
