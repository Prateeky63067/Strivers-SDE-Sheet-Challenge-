#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
  long long maxSum=0,currSum=0;
  for(int i=0;i<n;i++)
  {
      currSum+=arr[i];
      if(currSum>maxSum)
      {
          maxSum=currSum;
      }
      if(currSum<0)
      {
          currSum=0;
      }
  }
  return maxSum;
}