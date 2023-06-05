#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n=matrix.size();
	int m=matrix[0].size();
	vector<pair<int,int>>vp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
			{
              vp.push_back({i,j});
			}
		}
	}
	for(int i=0;i<vp.size();i++)
	{
		int row=vp[i].first;
		for(int i=0;i<m;i++)
		{
			matrix[row][i]=0;
		}
	}
	for(int i=0;i<vp.size();i++)
	{
		int col=vp[i].second;
		for(int i=0;i<n;i++)
		{
			matrix[i][col]=0;
		}
	}
}