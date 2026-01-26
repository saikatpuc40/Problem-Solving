#include<iostream>
using namespace std;

int main(){
    int n,target;
    cin>>target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
          if(arr[j]+arr[k]==target){
            cout<<"[";
            cout<<j;
            cout<<",";
            cout<<k;
          }
        }
    }
}
