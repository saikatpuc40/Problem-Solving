#include<iostream>
using namespace std;

int main(){
    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int l=max(l1,l2);
    int r=min(r1,r2);
    if(l<=r){
        cout<<l<<" "<<r;
    }
    else{
        cout<<-1;
    }

    }



