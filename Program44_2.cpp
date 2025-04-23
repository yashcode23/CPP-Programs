#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
   public :
   T *Arr;  
   int iSize;
  
    ArrayX(int No);
    ~ArrayX();
   void Accept();
   void Display();
   T Addition();

};

template<class T>
 ArrayX<T> :: ArrayX(int No)
 {
    cout<<"Inside Constructor\n";
   iSize = No;
   Arr = new T [iSize];
 }
 template<class T>
 ArrayX<T> :: ~ArrayX()
 {
   delete [] Arr;
 }

 template<class T>
 void ArrayX<T> ::  Accept()
 {
    cout<<"Enter element are:\n";
    int i = 0;
    for(i=0;i<iSize;i++)
    {
        cin>>Arr[i];
    }
 }

 template<class T>
 void ArrayX <T>:: Display()
 {
    cout<<"Entered element are :\n";
   int i = 0;
   for(i=0;i<iSize;i++)
   {
    cout<<Arr[i]<<endl;
   }
 }

 template<class T>
 T ArrayX<T> :: Addition()
 {
    int i =0;
    T iSum = 0;

    for(i=0;i<iSize;i++)
    {
      iSum = iSum + Arr[i];
    }
    return iSum;
 }

int main()
{
    ArrayX  <int> *iobj = new ArrayX<int>(5);
    

    iobj->Accept();
    iobj->Display();
    cout<<"Addition is :"<<iobj->Addition()<<endl;

    ArrayX  <float> *fobj = new ArrayX<float>(5);
    
    fobj->Accept();
    fobj->Display();
    cout<<"Addition of float :"<<fobj->Addition()<<endl;

     



    return 0;
}