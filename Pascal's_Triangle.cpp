#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
 vector<vector<long long int>>pascal;
 if(n==1)
 {
   vector<long long int>v;
   v.push_back(1);
   pascal.push_back(v);
   return pascal;
 }
 if(n==2)
 {
   vector<long long int>v;
   v.push_back(1);
   pascal.push_back(v);
    v.push_back(1);
    pascal.push_back(v);
   return pascal;
 }
 vector<long long int>v;
   v.push_back(1);
   pascal.push_back(v);
    v.push_back(1);
   
    pascal.push_back(v);
 for(int i=2;i<n;i++)
 {
    vector<long long int>vn;
    vn.push_back(1);
   for(int j=0;j<i-1;j++)
   {
       vn.push_back(pascal[i-1][j]+pascal[i-1][j+1]);
   }
    vn.push_back(1);
     pascal.push_back(vn);
 }
 return pascal;
}
