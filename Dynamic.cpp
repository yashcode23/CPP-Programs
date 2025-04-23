#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
        Demo()
        {
            cout<<"Inside constructor\n";
        }
        ~Demo()
        {
           cout<<"Inside destrcutor\n"; 
        }
        void Display() 
        {
            cout<<"Inside display\n";
        }
};

int main()
{
    Demo *ptr1 = new Demo;
    Demo *ptr2 = new Demo;
 
    ptr1->Display();

    delete ptr1;
    
    return 0;
}