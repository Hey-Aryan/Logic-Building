//Maximum

//Addition of n numbers Array
#include<iostream>
using namespace std;

template <class T>
int Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]> Max)
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int Data[] = {10,20,30,40};
    int iRet = Maximum(Data, 4);

    cout<<"Maximum of intergers :"<<iRet<<"\n";

    float Dataf[] = {1.11f,23.2f,245.5f,245.3f,70.87f};
    float fRet = Maximum(Dataf, 5);

     cout<<"Maximum of floats :"<<fRet<<"\n";

    return 0;
}