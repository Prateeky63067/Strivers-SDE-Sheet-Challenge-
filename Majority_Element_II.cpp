#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
   map<int,int>mp;
   int n=arr.size();
   for(int i=0;i<n;i++)
   {
	   mp[arr[i]]++;
   }
   vector<int>v;
   for(auto val:mp)
   {
	   if(val.second>(n/3))
	   {
		   v.push_back( val.first);
	   }
   }
   return v;
}