#include<iostream>
using namespace std;

class Demo
{
    public:
        //1000
        int Addition(int A, int B)
        {
            int Ans = 0;
            Ans = A+B;
            return Ans;
        }
        //2000
        int Addition(int A,int B,int C)
        {
            int Ans = 0;
            Ans= A+B+C;
            return Ans;
        }
        //3000
        float Addition(float A,float B)
        {
            float Ans= 0.0f;
            Ans = A + B;
            return Ans;
        }
};
int main()

{
    Demo obj;
    int i =10.0f , j = 20.0f,k=30;
    int Ret = 0;
    Ret = obj. Addition(i,j);
    cout<<"Addition is : "<<Ret<<"\n";
    Ret = obj. Addition(i,j,k);
    cout<<"Addition is : "<<Ret<<"\n";
    Ret = obj.Addition(i,j);
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}