#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int k)
{
    
   for(int i=0;i<n;i++)
   {
     if(arr[i]==k)
     {
        return i;
     }
   }
    return -1;
}


int binary_search(int arr[],int start,int n,int k)
{
   
    
   int mid=(start+n-1)/2;
   if(k=arr[mid])
   {
    return mid;

   }
   else if(arr[mid]>k)
   {
    return binary_search(arr,0,mid-1,k);
   }
   else if(arr[mid]<k){
    return binary_search(arr,mid+1,n,k);
   }
   return -1;
}



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


    int k;
    cout<<"Enter element which you want to find in the array :";
    cin>>k;
    
    int pos=linear_search(arr,n,k);
    if(pos==-1)
    {
        cout<<"Element not found in the array"<<endl;
    }
    else
    {
        cout<<pos;
        cout<<endl;
    }
    int p=binary_search(arr,0,n,k);
    
    if(p==-1)
    {
        cout<<"Element not found in the array"<<endl;
    }
    else
    {
        cout<<p<<endl;
    }
    return 0;
}