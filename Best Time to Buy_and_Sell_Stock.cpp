#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
  vector<int>arr1;
  vector<int>arr2;
  int n=prices.size();
  int mine=prices[0];
  for(int i=0;i<n;i++)
  {
   mine=min(mine,prices[i]);
      arr1.push_back(mine);
  }
  int maxe=prices[n-1];
  for(int i=n-1;i>=0;i--)
  {
  maxe=max(maxe,prices[i]);
  arr2.push_back(maxe);
   
  }
  reverse(arr2.begin(),arr2.end());
int ans=INT_MIN;
  for(int i=0;i<n;i++)
  {
       ans=max(ans,(abs(arr1[i]-arr2[i])));
  }
  return ans;

}