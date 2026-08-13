#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
}