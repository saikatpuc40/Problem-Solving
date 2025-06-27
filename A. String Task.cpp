#include<bits/stdc++.h>
using namespace std;

int main(){
    string str,result="";
    cin>>str;
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        {
              continue;
        }
        else{
                result = result+".";
                result = result+str[i];



        }
    }
    cout<<result;


}
