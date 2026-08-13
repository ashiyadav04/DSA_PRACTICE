#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter value of a:";
    cin>>a;
    int n=a;
    int sum=0;
    while(n!=0)
    {
       int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<" sum is:";
    cout<<sum;
    return 0;
}