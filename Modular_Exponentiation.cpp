#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
  long ans=1;
  long xx=x;
 while(n)
 {
	 if(n%2!=0)
	 {
		 ans=((ans)%m*(xx)%m)%m;
	 }
	 xx=((xx)%m*(xx)%m)%m;
	n=n/2;;
 }
 return ans;
}

// best approch
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int cnt=0,el;
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
	if(count>(n/2))
	return el;
	else
	return -1;
}