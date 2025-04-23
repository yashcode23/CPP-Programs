#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int Value)
        {
            this->iSize = Value;
            this->Arr = new int[iSize];
        }
    
        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements : \n";
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Entered elements are : \n";
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();
    
    delete aobj;
    
    return 0;
}