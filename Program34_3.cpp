#include<iostream>
using namespace std;

void Display(int iNo)
{
  static int i = iNo;

  if(i>=1)
  {
    cout<<i<<" ";
    i--;
    Display(iNo);
  }

}
int main()
{
    int iValue = 0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}