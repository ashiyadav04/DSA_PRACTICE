#include<iostream>
using namespace std;
int single_digit_sum(int n,int k)
{
    int sum=0;
    while(n!=0)
    {
        int d=n%10;
        sum+=d;
        n/=10;
    }
    int ans=sum*k;
    if(0<=ans<=9)
    {
        return sum;
    }
    else
    {
        single_digit_sum(ans,k);
    }
    return sum;

}


int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int a=single_digit_sum(n,k);
    cout<<a;
}