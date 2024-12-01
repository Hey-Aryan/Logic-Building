//Create and open the file Programatically

#include<stdio.h>
#include<fcntl.h> //f = file, cnt = control

int OpenFile(char Name[])
{
    int fd = 0;
    fd = open(Name,0777); //octal number
    return fd;
}

int main()
{
    char Fname[20];
    int fd = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = OpenFile(Fname);

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