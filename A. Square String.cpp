#include<iostream>
using namespace std;

int main(){
    int n,flag =0;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
        string result = str[i];
        int len=result.length();
        if(len%2!=0){
            len=len+1;
        }
        len =len/2;
        //cout<<len<<endl;
        for(int j=0;j<len;j++)
        {
            if(result[j]!=result[j+len]){
                //cout<<j<<endl;
                //cout<<result[j]<<endl;
                //cout<<j+len<<endl;
                //cout<<result[j+len]<<endl;
                flag=1;
                break;
            }



        }
        if(flag ==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        result="";
        flag =0;

    }


}


