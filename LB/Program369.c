//Stack is printing when going down as well as backtracking
#include<stdio.h>

void Display(char *str )
{
    if(*str != '\0')
    {
        printf("%s\n",str);
        Display(++str);
        printf("%s\n",str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    Display(Arr);
    return 0;
}


