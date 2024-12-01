//Accept 2 strings one empty and one with characters and copy that data from s1 to s2
// toggle
#include <stdio.h>

void strcpyToggleX(char * src,char * dest)
{
    int iCnt = 0;
    while(*src != '\0')
    {
        if((*src>='A') && (*src<='Z'))
        {
            *dest = *src + 32;
        }
        else if((*src>='a') && (*src<='z'))
        {
            *dest = *src - 32; 
        }
        else 
        {
            *dest = *src;
        }
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

    strcpyToggleX(Arr,Brr);  //strcpyX(100,200);

    printf("Copied string is : %s\n",Brr);
    printf("Original string is : %s\n",Arr);

    return 0;
}