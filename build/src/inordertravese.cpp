#include<iostream>
using namespace std;
void inordertraverse(int*root, int n, int index)
{

 if(index >= n)
 {
    return;
 }
 int left=index*2+1;
 int right=index*2+2;
 inordertraverse(root, n, left);
 cout<<root[index]<<" ";
 inordertraverse(root, n, right);
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int*root=NULL;
    int arr[n];
    cout<<"Enter elements of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    inordertraverse(arr, n, 0);
    return 0;
}