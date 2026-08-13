#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    vector<string>word;
    string temp=""; 
    for(int i=0;i<s.size();i++)
    {
        while(i<s.size() && s[i]!=' ')
        {
            temp+=s[i];
            i++;
        }
    
   
        if (!temp.empty()) {
            word.push_back(temp);
            temp = "";
        }
}
reverse(word.begin(),word.end());
string ans=" ";
for(int i=0;i<word.size();i++)
{
   // if(!ans.empty())
    {
        ans+=" ";
        ans+=word[i];
    }
}

for(auto c:ans)
{
    cout<<c;
}
return 0;

}