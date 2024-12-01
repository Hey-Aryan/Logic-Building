//Create and open the file Programatically

#include<stdio.h>
#include<fcntl.h> //f = file, cnt = control

//  O_RDONLY  Open for Reading
//  O_WRONLY  Open for Writing
// O_RDWR     Oprn for Read and write

int Open(char Name[])
{
    int fd = 0;
    fd = creat(Name,0777); //octal number
    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that you want to create : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    return 0;
}