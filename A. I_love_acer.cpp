#include<iostream>
using namespace std;

int main(){
    int n,num[1000],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int pivot1=num[0];
    int pivot2=num[0];
    for(int i=1;i<n;i++){
        if(pivot1<num[i]){
            sum++;
            pivot1=num[i];

        }
        if(pivot2>num[i]){
            sum++;
            pivot2=num[i];
        }
    }
    cout<<sum;


}
