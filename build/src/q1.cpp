#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    int sum=0;

    for(int i=a;i<=b;i++)
    {
        if(i%3==0)
        {
            int num=i;
            
           while(num!=0)
           {
              int d=num%10;
              sum+=d;
              num=num/10;
           }
            if(sum%2==0)
           {
             count++;
           }
        }
       
    }

    cout<<count;


    return 0;
}