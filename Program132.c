//Accept from name from user and display it on screen
#include<stdio.h>

//problem

int main()
{
    char Arr[30];

    printf("Enter your full name :\n");
    scanf("%s",Arr); 
    //internally name of arr and function is considered as the base address of the arr 
    //therefore no &

    printf("Your name is :%s\n",Arr);

    return 0;
}  
