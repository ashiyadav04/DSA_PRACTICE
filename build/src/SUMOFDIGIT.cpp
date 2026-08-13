#include<iostream>
using namespace std;

int sum_of_digit(int n)
{
    int sum=0;
    while(n!=0)
    {
        int d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int sum=sum_of_digit(n);
    cout<<sum;
}