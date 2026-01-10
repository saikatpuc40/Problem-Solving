#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string number1,number2;
    cin>>number1;
    for(int i=0;i<number1.length();i=i+2){
        number2.push_back(number1[i]);

    }
    sort(number2.begin(),number2.end());

    for(int i=0;i<number2.length();i++)
    {
        cout<<number2[i];
        if(i!=number2.length()-1)
        {
            cout<<"+";
        }
    }

}
