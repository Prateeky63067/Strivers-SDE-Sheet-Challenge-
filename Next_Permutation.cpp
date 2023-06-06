#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &a, int n)
{
   int idx=-1;
   n=a.size();
   for(int i=n-1;i>0;i--)
   {
       if(a[i]>a[i-1])
       {
           idx=i;
           break;
       }
   }
   if(idx==-1)
   {
       reverse(a.begin(),a.end());
   }else{
       int prev=idx;
       for(int i=idx+1;i<n;i++)
       {
           if(a[i]>a[idx-1] && a[i]<=a[prev])
           {
               prev=i;
           }
       }
       swap(a[idx-1],a[prev]);
       reverse(a.begin()+idx,a.end());
   }
   return a;
}