#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int floor=a/b;
    int ceil=floor+1;
    float round =float(a)/float(b);
    if(round==floor){
            cout<<"floor "<<a<<" / "<<b<<" = "<<floor<<endl;
            cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil-1<<endl;

    }else{
        cout<<"floor "<<a<<" / "<<b<<" = "<<floor<<endl;
        cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil<<endl;

    }
    float c=floor+.50;
    if(c<=round){
            cout<<round<<endl;
            cout<<c<<endl;
        cout<<"round "<<a<<" / "<<b<<" = "<<ceil<<endl;
    }
    else{
        cout<<"round "<<a<<" / "<<b<<" = "<<floor<<endl;
    }




}
