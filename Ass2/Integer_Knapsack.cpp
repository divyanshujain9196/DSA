#include <bits/stdc++.h>
using namespace std;
#define lp(i,a,b) for(int i=a;i<b;i++)
const int N=1e3+2 ;
int val[N],wt[N];
int dp[N][N];
int knapsack(int n,int W)
{
    
    if(W<=0)
    return 0;
    if(n<=0)
    return 0;
    if(dp[n][W]!=-1)
    return dp[n][W];
    if(wt[n-1]>W)
    dp[n][W]= knapsack(n-1,W);
     else
    dp[n][W]= max(knapsack(n-1,W),knapsack(n-1,W-wt[n-1]) + val[n-1]);
    return dp[n][W];
    
}
int main() {
    
    lp(i,0,N)
    {
        lp(j,0,N)
        dp[i][j]=-1;
    }

    int n;
    cout<<" enter number of items ";
    cin>>n;
    int W;
    cout<<"enter weight of knapsack ";
    cin>>W;
   cout<<"enter weight of items ";
   lp(i,0,n)
   {
       cin>>wt[i];
   }
   cout<<"enter cost of items ";
   lp(i,0,n)
   {
       cin>>val[i];
       
   }
   cout<<"Maximum profit = "<<knapsack(n,W);
    return 0;
}