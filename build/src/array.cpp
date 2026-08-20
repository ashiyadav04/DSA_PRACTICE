// sorting 
//1.Ascending order
//sortr(arr_name,arr_name+length,less<init>())//i third parameter not passed then by default it sort in ascending order
//2.descending order 
//sort(arr_name,arr_name+length,greater<int>())

//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }

    // int sum=0;
    // for(int i=0;i<5;i++)
    // {
    //     sum+=arr[i];
    // } cout<<"sum in ascending order: "<<sum<<endl;
    cout<<"sum of top 5 elements: "<<accumulate(arr,arr+5,0)<<endl;
  
    sort(arr,arr+n,greater<int>());

    cout<<"Marks in descending order: ";
    for(int i=n-5;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


//1.Array equality
//bool ans=equal(arr1,arr1+len,arr2);

//2.Reverse Array
//reverse(nums,numslen)

//3. traditional for loop
//for(int i-0;i<n;i++)
// {

// }

//4. for each loop
// for(auto c:nums)
// {

// }