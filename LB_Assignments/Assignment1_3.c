//3 //Program to print 5 to 1 numbers on screen

#include<stdio.h>

void Display()
{
    
    int i = 5;
    //    1      2    3
    for(i = 5; i>=1; i--)
    {
        printf("%d\n",i);  //4   
    }
}

int main()
{
    Display();
    return 0;
}