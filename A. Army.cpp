#include <iostream>
using namespace std;

int main() {
  int x,a,b,diff,sum=0;
  int num[100];
  cin>>x;

  for(int i=0;i<x-1;i++){
    cin>>num[i];
  }
  cin>>a;
  cin>>b;

  for(int i=a;i<b;i++){
    sum=sum+num[i-1];

  }
  cout<<sum;



  return 0;
}
