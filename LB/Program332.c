//Check weather 4th bit is on or off
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 8; // 2 raises to 3 = 8
    UINT Result = 0;

    Result = No & iMask;   // bitwise &

    if(Result == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("4th bit is on\n");
    }
    else
    {
        printf("4th bit is off\n");
    }
    return 0;
}