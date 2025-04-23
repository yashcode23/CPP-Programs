#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j,k;
    void fun()
    { cout<<"Base fun\n";}
    virtual void gun()
    { cout<<"Base gun\n";}
    // abstract method -----
    virtual int Addition(int no1,int no2) =0;  // pure virtual

};

class Derived : public Base
{
    public :
    int a,b;
    void gun() // concrete method 3000 //virtual optional hot
    { cout<<"Derived sun\n";}
    int Addition (int no1, int no2)
    {
        return no1 + no2;
    }
};

int main()
{
    Base bobj;

    Base *bp = new Derived;
    bp->fun();
    bp->gun();
    int Ret = 0;
    Ret=bp->Addition(10,11);
    cout<<"Addition is :"<<Ret<<"\n";

    return 0; 
}
