#include<iostream>
using namespace std;

int main(){
    string str;
    string str2[100];
    string result= "";
    for(int i=0;i<str.length();i++)
    {
        for(int j=0;j<str.length();j++)
        {
            if(result.find(str[i])==-1)
            {
                result+=str[i];
            }
            else{
                str2[i]=result;
                result="";
                break;
            }

        }
    }
    int k=0;
    while(str2[k]!=" "){
        cout<<str2[k]<<endl;
        k++;
    }
}
