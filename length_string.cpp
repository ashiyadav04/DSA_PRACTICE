#include<bits./stdc++.h>
using namespace std;


char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
    }
    return ch;
}


bool check_palindrome(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(name[s]!=name[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}


void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}


int getLength(char name[100])
{
    int count =0;
    for(int i=0;name[i]!='\0';i++)
    {
      count ++;
    }
    return count ;
}


int main()
{
    char name[100];
    cin>>name;
    string s;
    cin>>s;
    cout<<"string is : "<<s<<endl;
    int length=getLength(name);
    cout<<"lenght of char array is : "<<length<<endl;

    reverse(name,length);
    cout<<"reverse is: "<<name<<endl;
    //lowercase

    for(int i=0;i<length;i++)
    {
        toLowerCase(name[i]);
    }
    //palindome or not

    bool ans= check_palindrome(name,length);
    if(ans==0)
    {
        cout<<"Not Palindrome !"<<endl;
    }
    else
    {
        cout<<"Yes Palindrome !"<<endl;
    }
}