#include<iostream>
using namespace std;

int Multi(int iNo)
{
    static int iDigit = 0;
    static int iMul = 1;
    if(iNo!=0)
    {
      iDigit = iNo % 10;
      iMul = iMul * iDigit;
      iNo = iNo / 10;
      Multi(iNo);
    }
    return iMul;
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  cout<<"Enter number:"<<endl;
  cin>>iValue;
  
  iRet=Multi(iValue);
  cout<<"Product is :"<<iRet<<endl;
  return 0;
}