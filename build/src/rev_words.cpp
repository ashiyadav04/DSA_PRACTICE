#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.size();
    int start=0;
    int end=n-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ' || s[i]=='/0')
        {
            swap(s[start++],s[end--]);
        }
    }
}