#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Number of arguments are : %d\n",argc); //argument count

    printf("Name of executable is : %s\n",argv[0]); // argument vector

    for(int i = 0; i< argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n",i,argv[i]);
    }

    printf("");

    return 0;
}
