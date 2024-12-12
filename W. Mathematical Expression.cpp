#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    char ch1,ch2;
    cin>>num1>>ch1>>num2>>ch2>>num3;
    int sum=num1+num2;
    int mul=num1*num2;
    int sub=num1-num2;
    if(ch1=='+'){
        if(sum==num3){
        cout<<"Yes";
    }
    else{
        cout<<num1+num2;
    }

    }
    else if(ch1=='*'){
    if(mul==num3){
        cout<<"Yes";
    }
    else{
        cout<<num1*num2;
    }

    }
    else if(ch1=='-'){
        if(sub==num3){
        cout<<"Yes";
    }
    else{
        cout<<num1-num2;
    }

    }





}

