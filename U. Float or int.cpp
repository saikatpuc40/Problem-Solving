#include<bits/stdc++.h>
using namespace std;


int main(){
    float N;
    cin>>N;
    int num=N;
    N=N-num;
    if(N>0){
        cout<<"float"<<" "<<num<<" "<<setprecision(3)<<N;
    }
    else{
        cout<<"int"<<" "<<num;
    }
}
