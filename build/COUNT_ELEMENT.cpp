#include<bits./stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cout<<"Enter the value of n: "<<endl;
    // cin>>n;
    vector<int>vec={10,0,0,50};
    // vector<int>vec(n);
    // for(int i=0;i<n;i++)
    // {
    //     int t;
    //     cin>>t;
    //     vec.push_back(t);
    // }
    int freq;
    freq=count(vec.begin(),vec.begin()+2,20);
    // vec.erase(vec.begin()+0);
    vec.erase(vec.begin()+0);
    //for(auto v:vec)
    //cout<<"Vector is :"<<endl;
    cout<<freq;
    for(auto v:vec) cout<<v;
}