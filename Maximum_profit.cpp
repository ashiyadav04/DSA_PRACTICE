#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max;
    int min=0;
    for(int i=0;i<n;i++)
    {
      max=arr[i];
      if(max>arr[i+1])
      {
        max=arr[i+1];
        for(int j=i+1;j<n;j++)
        {
            min=arr[j+1];
            if(min<arr[j+1])
            {
                min=arr[j+1];
            }
        }
      }

    }
    cout<<max-min;
}