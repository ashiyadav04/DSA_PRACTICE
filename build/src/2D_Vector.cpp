//vector of vector is known as 2D vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
     vector<vector<int>>vec(row,vector<int>(col));
    vector<int>arr(row);
    for(auto &i:arr)
    {
       cin>>i;
    }
    for(auto i:arr)
    {
        cout<<i;
    }
for(auto &i:vec)
{
    for(auto &j:i)
    {
      cin>>j;
    }
}


// for(int i=0;i<row;i++)
// {
//     for(int j=0;j<col;j++)
//     {
//         cin>>vec[i][j];
//     }
// }
//  vec.push_back({1,2,3,4});
//  vec[1].insert(vec[1].begin()+2,0);//insert at particular index
// for(int i=0;i<vec.size();i++)
// {
//     for(int j=0;j<vec[i].size();j++)
//     {
//         cout<<vec[i][j]<<" ";
//     }
//     cout<<endl;
// }

}