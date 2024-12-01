//Accept from name from user and display it on screen
#include<stdio.h>

//Solution

int main()
{
    char Arr[30];

    printf("Enter your full name :\n");
    //scanf("%s",Arr); 
    scanf("%[^'\n']s",Arr); //regular experession //regx 

    printf("Your name is :%s\n",Arr);

    return 0;
}