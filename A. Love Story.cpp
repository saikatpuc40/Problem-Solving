#include<iostream>
using namespace std;

int main(){
    int n,length=0;
    cin>>n;
    string str,result="codeforces",strResult="";
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<str.length();j++)
        {
            strResult[j]=tolower(str[j]);
            if(strResult[j]!=result[j]){
                //cout<<strResult[j]<<endl;
                //cout<<result[j]<<endl;
                length++;
            }
        }
        cout<<length<<endl;
        length=0;
    }
}
