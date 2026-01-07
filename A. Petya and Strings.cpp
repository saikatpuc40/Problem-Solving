#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    for(int i=0;i<str1.length();i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
        if(str1[i]==str2[i])
        {

            if(i==str1.length()-1)
            {
                cout<<0;
                break;
            }
            continue;
        }
        else if(str1[i]>str2[i]){
            cout<<1;
        }
        else{
            cout<<-1;
        }
    }
}
