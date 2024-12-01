//accept string from user and convert it to Capital
#include<stdio.h>

void struprX(char * str)     // void function does not return but make changes in main function
{
    while(*str != '\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            *str = *str - 32;
        }
        str ++;
    }
}

int main() 
{
    char Arr[50];

    printf("Please Enter string :\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr); //strlwrX(100);  //call by address

    printf("String After Conversion is : %s\n",Arr);    

    return 0;
}