#include<iostream>
using namespace std;

class Demo
{
  public:
  int i;
  int j;
  int k;
   Demo(int a = 10, int b= 20, int c =30) // Parameterized with default argument 
   {
    cout<<"Value of this is : "<<this<<"\n";
    i = a;
    j = b;
    k = c;
   }
   void Fun(int No1,int No2)
   {
    cout<<"Inside Fun\n";
    cout<<"Value of i"<<this->i<<"\n";
    cout<<"Value of j"<<this->j<<"\n";
    cout<<"Value of k"<<this->k<<"\n";
   }
   void Display()
   {
    cout<<"Inside Display\n";
    cout<<"Value of this pointer is :"<<this<<"\n";
   }
};
int main()
{
   Demo obj1;
   Demo obj2(11,21,51);

    obj1.Fun(5,6);
    obj2.Fun(8,9);
    cout<<"Address of obj1 is "<<&obj1<<"\n";

    obj1.Display();
    obj2.Display();

    cout<<"Address of obj2 is "<<&obj2<<"\n";

    return 0;
}