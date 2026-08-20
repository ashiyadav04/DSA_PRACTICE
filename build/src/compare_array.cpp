#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int key;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        key=vec[i];
       for(int j=i+1;j<n;j++)
         {
           sum=key+vec[j];
           if(sum==k)
           {
            cout<<key <<" "<<vec[j]<<endl;
           }
        }

        // if((vec[i+1]+key)==k  && i<n)
        // {
        //     cout<<key<<" "<<vec[i+1];
        // }
    }

}