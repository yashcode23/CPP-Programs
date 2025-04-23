#include<iostream>
#include<string.h>
using namespace std;

int Small(char *str)
{
    static int iCount = 0;
    if(*str!='\0')
    {
        
        if((*str>='a' ) && (*str<='z'))
        {
            iCount++;
        }
        str++;
        Small(str);   
    }
    return iCount;  
}
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter String:"<<endl;
    cin.getline(Arr,30);
   iRet=Small(Arr);
   cout<<"Number of Small character :"<<iRet<<endl;


   
    return 0;
} 