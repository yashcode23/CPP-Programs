#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun()
        {
            cout<<"Inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()
        {
            cout<<"Inside derived gun\n";
        }
};

int main()
{
    Base *bp1 = new Base;// NC 12
    Derived *dp1 = new Derived;//NC  20
    Base *bp2 = new Derived;//UC  20
    //Derived *dp2 = new Base;//DC   12  

    return 0;
}