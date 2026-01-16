#include<iostream>
using namespace std;

int main(){
    string str;
    string str2[100];
    string result= "";
    int idx=0;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        for(int j=i;j<str.length();j++)
        {
            if(result.find(str[j])==-1)
            {
                result+=str[j];
            }
            else{
                str2[idx]=result;
                idx++;
                result="";
                break;
            }

        }
    }
    int maximum =str2[0].length();
    int k=1;
    while(k<idx){
        if(str2[k].length()>maximum){
            maximum=str2[k].length();
        }
        k++;
    }
    cout<<maximum;
}
