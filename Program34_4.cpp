#include<iostream>
using namespace std;

void Display(int iNo)
{
   static int i =1;
   static char ch= 'A';

   if(i<=iNo)
   {
    cout<<ch<<" ";
    ch++;
    i++;
    Display(iNo);
   }
}
int main()
{
  int iValue = 0;

  cout<<"Enter number"<<endl;
  cin>>iValue;

  Display(iValue);

  return 0;
}