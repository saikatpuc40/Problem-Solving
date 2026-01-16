#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];
        if(ch[i]=='c'|ch[i]=='o'|ch[i]=='d'|ch[i]=='e'|ch[i]=='f'|ch[i]=='r'|ch[i]=='s')
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}
