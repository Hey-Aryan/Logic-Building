//Accept 2 strings one empty and one with characters and copy that data from s1 to s2

#include <stdio.h>

void strcpyX(char * src,char * dest)
{
    int iCnt = 0;
    while(*src != '\0')
    {
        *dest = *src; //equal to chya adi empty arr ani techya nantar data wala arr

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

    strcpyX(Arr,Brr);  //strcpyX(100,200);

    printf("Copied string is : %s\n",Brr);


    return 0;
}