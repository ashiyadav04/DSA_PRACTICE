#include<iostream>
using namespace std;
#include<math.h>
    int main()
    {
        int a;
        cout<<"Enter value of a:";
        cin>>a;
        int n=a;
        int sum=0;
        int place =1;
        while(n>0)
        {
            int r=n%2;
            sum=sum+r*place;
            place=place*10;
            n=n/2;
        }
        cout<<"Binary is:";
        cout<<sum;
        return 0;
    }