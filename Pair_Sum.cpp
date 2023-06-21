#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){

vector<vector<int>>ans;
map<int,int>mp;
int n=arr.size();
for(int i=0;i<n;i++)
{
   int x=s-arr[i];
   if(mp.find(x)!=mp.end())
   {
      int val=mp[x];
      while(val--)
      {
         int minn=min(x,arr[i]);
         int maxn=max(x,arr[i]);
         ans.push_back({minn,maxn});
      }
   }
   mp[arr[i]]++;
}
  sort(ans.begin(),ans.end());
  return ans;
 

   

}

 