#include<iostream>
using namespace std;

class ArrayX
{
  public:
  int *Arr;
  int iSize;

  ArrayX(int iValue)
  {
    iSize = iValue;
    Arr = new int[iSize];
  }
  void Accept()
  {
    cout<<"Enter the element"<<endl;
    int i = 0;
    for(i=0;i<iSize;i++)
    {
      cin>>Arr[i];
    }
  }
  void Display()
  {
    cout<<"Entered the element"<<endl;

    int i =0;
    for(i=0;i<iSize;i++)
    {
      cout<<Arr[i]<<endl;
    }
  }

  int Frequency(int iNo)
  {
    int i = 0;
    int iCount = 0;
    for(i=0;i<iSize;i++)
    {
      if(Arr[i]==iNo)
      {
      iCount++;
      }
    }
    return iCount;
  }
  
};
int main()
{
 int iCount = 0;
 int iValue = 0;
 int iRet = 0;

 cout<<"Enter the value that you want"<<endl;
 cin>>iCount;

 ArrayX obj(iCount);

 obj.Accept();
 obj.Display();

 cout<<"Enter number that you want check frequnecy"<<endl;
 cin>>iValue;

 iRet =obj.Frequency(iValue);
 cout<<"Frequency of the number is "<<iRet<<endl;


  return 0;
}