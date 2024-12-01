#include<stdio.h>
#include<fcntl.h> //f = file, cnt = control

int CreateFile(char Name[])
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

    fd = CreateFile(Fname);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File is successfully created with FD %d\n",fd);
    }

    return 0;
}