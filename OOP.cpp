#include<iostream>
using namespace std;

class Demo
{
  public:
      int i;
      int j;

      void fun()
      {
        cout<<"Inside fun of Demo class\n";
        cout<<"Inside fun of Demo2 class\n";
      }  
};

int main()
{
     Demo obj1;
     Demo obj2;
     
     obj1.i = 11;
     obj2.j = 21;

     obj1.i = 10;
     obj2.j = 20;

     obj1.fun();
     obj2.fun();
    

     return 0;
}