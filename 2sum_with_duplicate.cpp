#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cout<<"Enter the size of array:  ";
    cin>>n;
    vector<int>vec(n); 
    cout<<"Enter  the elements in the array:  ";
    for(int i=0;i<n;i++) cin>>vec[i];
    int target;
    cout<<"Entyer the value of target: ";
    cin>>target;
    int i=0;
    int j=n-1;
    vector<int>ans;
    //111222333
    while(i<j)
    {
      if(vec[i]+vec[j]>target)
      {
        j--;
      }
      else if(vec[i]+vec[j]<target)
      {
        i++;
      }
      else if(vec[i]+vec[j]==target)
      {
        ans.push_back(vec[i]);
        ans.push_back(vec[j]);
        i++;
        j--;
        while(i<j && vec[i]==vec[i-1])
        {
            i++;
        }
        while( i<j && vec[j]==vec[j+1])
        {
            j--;
        }
      }
    }

    for(auto x:ans) cout<<x<<" ";
    
}