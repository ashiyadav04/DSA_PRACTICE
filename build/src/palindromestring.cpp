#include<iostream>
using namespace std;

char toloweer(char ch)
{
    char temp;
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
      temp=ch-'A'+'a';
      return temp;
    }
    return ch;
}

bool checkpalindrome(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(tolower(a[s])!=tolower(a[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}


int main()
{
    int n;
    cout<<"Enter size of character array:";
    cin>>n;
    char ch[n];
    for(auto a:ch
    )
    {
      cin>>ch[i];
    }
    bool temp=checkpalindrome(ch,n);
    if(temp==1)
    {
        cout<<"Yes, Palindrome";

    }
    else
    {
        cout<<"Not,Plaindrome";
    }

}