#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void valid_string(string s)
{
    if(s.length()%2==0)
    {

    int ct=count(s.begin(),s.end(),'&');
    int ct2=count(s.begin(),s.end(),'#');
    if(ct>0 && ct2>0 )
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    }
    else
    {
        cout<<"No";
    }
}

int main()
{
    string s;
    cin>>s;
    valid_string(s);
}