#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    int number=n.size();
    int numInt = std::stoi(n);

    if(number==4){
        int cal=numInt/1000;
        if(cal%2==0){
            cout<<"EVEN";
        }
        else{
            cout<<"ODD";
        }

    }else{
        int cal=numInt/100;
        if(cal%2==0){
            cout<<"EVEN";
        }
        else{
            cout<<"ODD";
        }

    }


}
