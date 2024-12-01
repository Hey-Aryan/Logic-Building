//Accept 2 strings one empty and one with characters and copy that data from s1 to s2
// small to capital
#include <stdio.h>

void strcpyCapX(char * src,char * dest)
{
    int iCnt = 0;
    while(*src != '\0')
    {
        if((*src>='a') && (*src<='z'))
        {
            *src = *src - 32;  //this changes code in Arr also
        }
        *dest = *src; 

        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char Arr [20],Brr[20];

    printf("Enter string with data :\n");
    scanf("%[^'\n']s",Arr);

    strcpyCapX(Arr,Brr);  //strcpyX(100,200);

    printf("Copied string is : %s\n",Brr);
    printf("Original string is : %s\n",Arr);


    return 0;
}

//in this im changing code inn Arr also