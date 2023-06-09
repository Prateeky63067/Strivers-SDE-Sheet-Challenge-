#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	map<int,int>mp;
	int ans;
	long long sum=0;
	long long Orisum=0;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
      sum+=arr[i];
	  Orisum+=(i+1);
	}
	for(auto val:mp)
	{
		if(val.second>1)
		{
          ans= val.first;
		  break;
		}
	}
	
	sum=sum-ans;
	int ans2=Orisum-sum;
	return {ans2,ans};
}
