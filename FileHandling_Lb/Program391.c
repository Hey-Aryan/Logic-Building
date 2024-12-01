//Read the whole data from a file and print
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0 , Length = 0;
    char Data[100];

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        write(1,Data,Length);
    }

    close(fd);
    
    return 0;
}


// In this if file size = 1012

// while loop will work like 100,100,100,100,100,100,100,100,100,100,2,0

// Mug size = 100

// Angholichi story where 

//IF you increase the size of mug then iteration will reduced 

// i.e. 1024 = 1kb 