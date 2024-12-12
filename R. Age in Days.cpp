#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    if(number>364)
    {
        int year=number/365;
        int days=number%365;
        int month=days/30;
        int day=days%30;
        cout<<year <<" years"<<endl;
        cout<<month <<" months"<<endl;
        cout<<day <<" days"<<endl;

    }
    else if(number>29){
        int month=number/30;
        int day=number%30;
        cout<<"0" <<" years"<<endl;
        cout<<month <<" months"<<endl;
        cout<<day <<" days"<<endl;

    }
    else{
        cout<<"0" <<" years"<<endl;
        cout<<"0" <<" months"<<endl;
        cout<<number <<" days"<<endl;

    }
}
