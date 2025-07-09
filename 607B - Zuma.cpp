#include<bits/stdc++.h>
using namespace std;
int n,a[505],dp[505][505];
int main()
{
    memset(dp,127,sizeof dp);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i][i]=1;
    }
    for(int i=1;i<n;i++)
        dp[i][i+1]=a[i]==a[i+1]?1:2;
    for(int len=3;len<=n;len++)
    {
        for(int l=1;l<=n-len+1;l++)
        {
            int r=l+len-1;
            if(a[l]==a[r])dp[l][r]=dp[l+1][r-1];
            for(int k=l;k<r;k++)
                dp[l][r]=min(dp[l][r],dp[l][k]+dp[k+1][r]);
        }
    }
    cout<<dp[1][n];
}
