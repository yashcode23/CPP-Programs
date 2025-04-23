#include<iostream>
using namespace std;

template< class T >
T Multiply(T No1 , T No2)
{
    T Ans;
    Ans = No1*No2;
    return Ans;
}

int main()
{
    int iValue1 = 20 , iValue2 =10;
    int iRet = 0;

    float fValue1 = 10.0f , fValue2 = 30.0f;
    float fRet = 0.0f;

    iRet=Multiply(iValue1,iValue2);
    cout<<iRet<<endl;

    fRet=Multiply(fValue1,fValue2);
    cout<<fRet<<endl;




    return 0;
}