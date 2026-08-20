//vector ->  dynamic array
//it can grwo or shrink on run time 

//Declaration and initialization

//vector<int>v;  //empty vector 
//vector<int>v(5);  //vector with 5 elements by default value 0
//vector<int>v(5,10); size->5 and initialize with the 10


//direct initialization 

//vector<int>vec1={1,2,3,4,5};

//vec.push_back(10);


//swap(my_vec1[1],my_vec1[2]);


//Swap k blocks
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main()
// {
//   int n,k;
//   cin>>n>>k;
//   vector<int>vec(n);
//   for(int i=0;i<n;i++) cin>>vec.push_back(i);
    
// //     for(int i=0;i<k;i++)
// //     {
// //         swap(vec[i],vec[i+k]);
// //     }

// for(int i=0;i<n;i++)
// {
//     for(int j=i;j<i+k;j++)
//     {
//         swap(vec[j],vec[j+k]);
//     }
// }
//  for(auto n:vec)  cout<<n<<" "; 
  
//  }



 //count of element 
 //int freq=count(vec1,begin(),vec1.end(),element);


 //removing element
 //myArr.erase(vec1.begin()+index);  //no element can be erase in array 



//q.16
//Remove element

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++) cin>>t;
    vec.push_back(t);
    int ct=count(vec.begin(),vec.end(),1);
    // for(int i=0;i<n;i++)
    // {
    //     if(vec[i]==1)
    //     {
    //         count++;
            
        
    //     }
    // }
     vec.erase(vec.begin()+ct);
    for(auto i:vec) cout<<i<<" ";


}


