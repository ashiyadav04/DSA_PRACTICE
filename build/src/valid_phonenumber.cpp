#include<iostream>
using namespace std;
//no leading zeroes
void valid_phonenumber(int n,int x)
{
    int digit_count=n*x;
    
    if(digit_count>=10000 && digit_count<=99999)
    {
        cout<<"Yes"<<endl;
    
    }
    else
    {
        cout<<"No";
    
    }
}

int main()
{
    int n,x;
    cin>>n>>x;
    valid_phonenumber(n,x);
}