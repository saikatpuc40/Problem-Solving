#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v;
    v.push_back(10);
    v.push_back(20);

    for(int i=0;i<10;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    cout<<v.at(0)<<endl;
    cout<<v[0]<<endl;


    for(auto x:v){
        cout<<x<<endl;
    }





}
