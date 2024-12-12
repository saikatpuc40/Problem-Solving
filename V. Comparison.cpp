#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char ch;
    cin>>num1>>ch>>num2;

    if(ch=='>'){
        if(num1>num2){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(ch=='<'){
        if(num1<num2){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    else if(ch=='='){
        if(num1==num2){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }

}
