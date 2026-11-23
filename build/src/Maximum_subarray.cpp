#include<bits/stdc++.h>
using namespace std;
int main()
{
//     int n;
//     cin>>n;
    vector<int>vec={8,-1,3,4,-3,2,1};
    int n=vec.size();
    // for(int i=0;i<n;i++)
    // {
    //     cin>>vec[i];
    // }
   int  gsum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        int  sum=0;
        for(int j=i;j<n;i++)
        {
            sum+=vec[j];
            gsum=max(gsum,sum);
        }
    }
    cout<<gsum<<endl;
}