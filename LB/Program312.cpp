//Addition of n numbers Array
#include<iostream>
using namespace std;

template <class T>
int Addition(T Arr[], int iSize)
{
    int iCnt = 0;
    T Sum;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Data[] = {10,20,30,40};
    int iRet = Addition(Data, 4);

    cout<<"Addition of intergers :"<<iRet<<"\n";

    float Dataf[] = {1.11f,23.2f,245.5f,245.3f,70.87f};
    int fRet = Addition(Dataf, 5);

    Addition(Dataf, 5);

     cout<<"Addition of floats :"<<fRet<<"\n";

    return 0;
}