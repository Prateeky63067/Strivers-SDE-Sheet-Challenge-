#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    int cnt=0,el;
    int n=arr.size();
	for(int i=0;i<n;i++)
	{
		if(cnt==0)
		{
			cnt=1;
			el=arr[i];
		}else if(el==arr[i])
		{
			cnt++;
		}else{
			cnt--;
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(el==arr[i])
		{
			count++;
		}

	}
	if(count>(n/3))
	return el;
	else
	return -1;

}