#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	for(auto val:mp)
	{
		if(val.second>1)
		{
          return val.first;
		}
	}
}
