#include<iostream>
using namespace std;

char toloweer(char a)
{
    char temp=a-'A'+'a';
    return temp;
}
char toupper(char a)
{
    char temp=a+'A'-'a';
    return temp;
}
int main()
{
    char ch;
    cout<<"Enter value of ch:";
    cin>>ch;
    char temp;
    if(ch>='a' && ch<='z')
    {
        temp=toupper(ch);
        cout<<temp;
    }
    else
    {
        temp=tolower(ch);
        cout<<temp;
    }
    return 0;
}