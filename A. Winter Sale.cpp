#include<bits/stdc++.h>
using namespace std;


int main(){
    float disCount,disCountPrice;
    cin>>disCount>>disCountPrice;
    float Actual_Price=(disCountPrice*100)/(100-disCount);
    cout<<Actual_Price;
}
