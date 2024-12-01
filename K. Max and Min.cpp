#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    int mn=INT_MAX;
    int ma=INT_MIN;
    cin>>a>>b>>c;

    if(mn>=a){
        mn=a;
    }
    if(mn>=b){
        mn=b;

    }
    if(mn>=c){
        mn=c;
    }
    if(ma<=a){
        ma=a;
    }
    if(ma<=b){
        ma=b;
    }
     if(ma<=c){
        ma=c;
    }
    cout<<mn<<" "<<ma<<endl;
}
