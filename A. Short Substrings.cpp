#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n],result="";
    for(int i=0;i<n;i++){
        cin>>str[i];
        for(int j=0;j<=str[i].length()-1;j++){
            if(str[i][j]==str[i][j+1]){
              result+=str[i][j];
              j++;
            }
            else{
                result+=str[i][j];
            }
        }
        cout<<result<<endl;
        result="";
    }
}
