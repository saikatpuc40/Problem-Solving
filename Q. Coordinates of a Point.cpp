#include<iostream>
using namespace std;

int main(){
    float x1,y1;

    cin>>x1>>y1;

    if(x1==0 && y1==0)
    {
        cout<<"Origem";
    }
    else if((x1>0 && y1==0)||(x1<0 && y1==0)){
        cout<<"Eixo X";
    }
    else if((x1==0 && y1>0)||(x1==0 && y1<0)){
        cout<<"Eixo Y";
    }
    else if(x1>0 && y1>0){
        cout<<"Q1";
    }
    else if(x1>0 && y1<0){
        cout<<"Q4";
    }
    else if(x1<0 && y1<0){
        cout<<"Q3";
    }
    else{
        cout<<"Q2";
    }
}
