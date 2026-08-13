#include<iostream>
using namespace std;


int sum_even(int n)
{
    int sum=0;
  
    while(n!=0)
    {
      int d=n%10;
      sum+=d;
      n=n/10;
    }
    
    return (sum%2==0);
}



int divisible_by_3(int a,int b)
{
    int count=0;
   for(int i=a;i<=b;i++)

    {
      if(i%3==0 && sum_even(i))
      {
        count ++;
      }

    }

   return count;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<divisible_by_3(a,b);

}