#include<iostream>
using namespace std;

int Whitespace(char *str)
{
   static int iCount;
    if(*str!='\0')
    {
        if(*str==' ')
        {
            iCount++;
        }
      str++;
      Whitespace(str);
    }   
    return iCount;

}
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string:"<<endl;
    cin.getline(Arr,30);

    iRet=Whitespace(Arr);
    cout<<"Whitespace is :"<<iRet<<endl;

    return 0;
}