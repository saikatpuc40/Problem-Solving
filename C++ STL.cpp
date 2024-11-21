#include<iostream>
#include<vector>
using namespace std;


int main(){
    //vector<int>vec(10,-1);
    vector<int>vec={1,2,3,4};
    /*vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(4);
    vec.pop_back();*/

    vector<int>vec2(vec);

    for(int val:vec2){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"vec of indx 2:"<< vec[2] << " or " <<vec.at(2)<<endl;
    cout<<"vec of font : "<< vec.front() << " vec of back : " <<vec.back()<<endl;

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
}
