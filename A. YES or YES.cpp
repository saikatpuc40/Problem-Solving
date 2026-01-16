#include<iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    int number;
    cin>>number;
    string str[number];
    for(int i=0;i<number;i++){
        cin>>str[i];
        transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
        if(str[i]=="yes")
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    }


}
