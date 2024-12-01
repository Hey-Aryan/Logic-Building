//Copy paste data from one file to aother
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname1[20], Fname2[20];
    int fdSource = 0 , fdDest = 0, Length = 0;  //Dest = Destination
    char Data[100];

    printf("Enter the file name which contains data : \n");
    scanf("%s",Fname1);

    fdSource = open(Fname1, O_RDONLY);

    if(fdSource == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    //Naming of new file
    printf("Enter the file name that you want to create :\n");
    scanf("%s",Fname2);

    //Create new file
    fdDest = creat(Fname2,0777);


    if(fdDest == -1)
    {
        printf("Unable to create new file\n");
        return -1;
    }

    //Writing of date from source to Destination
    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
    {
        write(fdDest,Data,Length);
    }

    close(fdSource);
    close(fdDest);
    
    return 0;
}

// In this if file size = 1012

// while loop will work like 100,100,100,100,100,100,100,100,100,100,2,0

// Mug size = 100

// Angholichi story where 

//IF you increase the size of mug then iteration will reduced 

// i.e. 1024 = 1kb 