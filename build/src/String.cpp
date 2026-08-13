#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of chAR ARRAY";
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array is:";
    for(int i=0;i<n;i++){
    cout<<arr[i];
    }
    char ar[20];
    cin>>ar;
    cout << ar;

}