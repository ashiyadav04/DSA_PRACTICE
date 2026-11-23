#include<bits./stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int freq=count(vec.begin(),vec.end(),1);
    cout<<freq<<endl;
    vec.erase(vec.begin()+freq);
    for(auto v:vec)
    {
        cout<<v<<" ";
    }
}