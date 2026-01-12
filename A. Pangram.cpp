#include<iostream>
using namespace std;

int main(){
    int n;
    string str,str2;
    string result = "";
    cin>>n;
    cin>>str;
    for(int i=0;i<str.length();i++){
            str2.push_back(tolower(str[i]));
            if(result.find(str2[i])==-1){
                result+=str2[i];
            }

    }
    if(result.length()==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
