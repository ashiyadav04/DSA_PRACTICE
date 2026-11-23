#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    cout<<"Elements in array are: "; 
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<<"Enter the value of target"<<endl;
    cin>>target;

    sort(arr.begin(),arr.end());
    cout<<"Sorted Elements are: ";
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
     
    cout<<endl;
    int i=0;
    int j=n-1;
    bool found=false;
    while(i<j)
    {
        if((arr[i]+arr[j])==target)
        {
            cout<<"Pair found : "<<arr[i]<<" "<<arr[j]<<endl;
            found =true;
            break;
        }
        else if((arr[i]+arr[j])>target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if(!found)
    {
        cout<<"No pair found";
    }
    return 0;
}