#include <bits/stdc++.h> 
int ans(int i,int j,int row,int col,vector<vector<int>>&dp)
{
if(i==(row-1)&&j==(col-1))
return 1;
if(i>=row||j>=col)
return 0;
if(dp[i][j]!=-1)
return dp[i][j];
else
return dp[i][j]=ans(i+1,j,row,col,dp)+ans(i,j+1,row,col,dp);

}
int uniquePaths(int m, int n) {
	vector<vector<int>>dp(m,vector<int>(n,-1));
	return ans(0,0,m,n,dp);
	
}

// sol--2


#include <bits/stdc++.h> 

int uniquePaths(int m, int n) {
	int N=n+m-2;
	int r=m-1;
	int res=1;
	for(int i=1;i<=r;i++)
	{
		res=res*(N-r+i)/i;
	}
	return res;
}