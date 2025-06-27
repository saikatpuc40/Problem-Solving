#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long A,B,C,D;
    cin>>A>>B>>C>>D;
    double part1=B*log(A);
    double part2=D*log(C);
    if(part1>part2)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

