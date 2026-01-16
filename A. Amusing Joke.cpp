#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int flag=0;
    int length1=0,length2=0;
    string str[3];
    for(int i=0;i<3;i++){
        cin>>str[i];
    }

    string add=str[0]+str[1];
    for(int i=0;i<add.length();i++){
        length1= count(add.begin(),add.end(),add[i]);
        length2= count(str[2].begin(),str[2].end(),add[i]);

        if(length1!=length2){
            flag=1;
            break;
        }
    }
    if(add.length()!=str[2].length())
    {
        cout<<"NO";
    }
    else if(flag==0)
    {
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }



}
