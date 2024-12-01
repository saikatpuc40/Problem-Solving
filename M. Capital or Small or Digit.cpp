#include<iostream>
using namespace std;

int main(){
    char a;
    cin>>a;
    int ch=int(a);

    if(ch>=97 && ch<=122)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    else{
        cout<<"IS DIGIT";
    }
}
