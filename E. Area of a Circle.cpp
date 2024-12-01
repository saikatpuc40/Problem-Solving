#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double num;
    double r=3.141592653;
    cin>>num;
    std::cout << std::fixed;
    std::cout<<std::setprecision(9);
    cout<<num*num*r<<setprecision(9);
}
