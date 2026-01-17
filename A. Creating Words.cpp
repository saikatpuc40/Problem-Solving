#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str1,str2,first,second,str3,str4;
    for(int i=0;i<n;i++){
        cin>>str1;
        first=str1[0];
        cin>>str2;
        second=str2[0];
        for(int j=1;j<3;j++){
        str3+=str1[j];
        cout<<str3<<endl;
        str4+=str2[j];
        cout<<str4<<endl;
        }
        cout<<second+str3<<" ";
        cout<<first+str4<<endl;
        str3="";
        str4="";


    }



}
