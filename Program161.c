// Accept string and rev that string on spot physically
//time complexcity = (n+n/2)= 1.5 

#include<stdio.h>
//3 pointers in total
void strrevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];
    printf("Please Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Reverse string is : %s\n",Arr);

    return 0;
}