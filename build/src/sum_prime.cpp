#include<iostream>
using namespace std;

void sum_prime(int n)
{
    int sum=0;
    while(n!=0)
    {
        int d=n%10;
        sum+=d;
        n/=10;
    }
    if(sum<2)
    {
        cout<<"No";
        return;
    }
    int count =0;
    for(int i=2;i<=sum/2;i++)
    {
        if(sum%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}

int main()
{
    int n;
    cin>>n;
    sum_prime(n);
}