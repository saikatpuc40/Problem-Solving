#include<iostream>
using namespace std;

int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    long long mul=a*b*c*d;
    int last=mul%100;
    if(last==0)
    {
        cout<<"00";
    }
    else if(last>0 && last<10)
    {
        cout<<"0"<<last;
    }
    else{
        cout<<last;
    }


}
