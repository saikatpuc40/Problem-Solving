#include<iostream>
using namespace std;

int main(){
    long long multiple=1,reminder,modulas1,modulas2;
    long long n;
    cin>>n;
    for(int i=0;i<n;i++){
            multiple=5*multiple;
    }
    //cout<<multiple<<endl;
    reminder=multiple/10;
    modulas1=multiple%10;
    modulas2=reminder%10;
    cout<<modulas2*10+modulas1<<endl;


}
