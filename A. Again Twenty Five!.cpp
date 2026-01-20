#include<iostream>
using namespace std;

int main(){
    long long multiple=1,reminder,modulas1,modulas2;
    int base =5;
    long long n;
    cin>>n;
    while(n>0){
            if(n%2!=0){
                multiple *=base;
            }
            base =base*base;
            n=n/2;

    }
    /*for(int i=0;i<n;i++){
            multiple=5*multiple;
    }*/
    cout<<multiple<<endl;
    reminder=multiple/10;
    modulas1=multiple%10;
    modulas2=reminder%10;
    cout<<modulas2*10+modulas1<<endl;


}
