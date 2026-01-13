#include<iostream>
using namespace std;


int main()
{
   int sum=0;
   int n;
   cin>>n;
   string str[n];

   for(int i=0;i<n;i++){
    cin>>str[i];
    if(str[i]=="Icosahedron")
    {
        sum=sum+20;
    }
    else if(str[i]=="Tetrahedron")
    {
        sum=sum+4;
    }
    else if(str[i]=="Cube")
    {
        sum=sum+6;
    }
    else if(str[i]=="Dodecahedron")
    {
        sum=sum+12;
    }
    else
    {
        sum=sum+8;
    }
   }
   cout<<sum;



}
