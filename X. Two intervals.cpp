#include<iostream>
using namespace std;

int main(){
    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1<l2 && r1<l2)
    {
        cout<<5<<endl;
        cout<<-1;
    }
    else if(l1>=l2 && r2>=r1){
        cout<<1<<endl;
        cout<<l2<<" "<<r2;
    }
    else if(l2<=l1 && r2>=r1){
        cout<<2<<endl;
        cout<<l1<<" "<<r1;
    }
    else if(l1<=l2 && r1<=r2){
        cout<<3<<endl;
        cout<<l2<<" "<<r1;
    }
    else if(l2<=l1 && r2<=r1){
        cout<<4<<endl;
        cout<<l1<<" "<<r2;
    }

}
