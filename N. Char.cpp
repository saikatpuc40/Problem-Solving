#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        cout<<ch;
    }
    else{
        ch=ch+32;
        cout<<ch+32;
    }

}
