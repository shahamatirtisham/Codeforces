#include<bits/stdc++.h>
using namespace std;

using ll=long long;

#define fast cin.tie(0)->sync_with_stdio(0)
#define all(v) v.begin(), v.end()

int main()
{
    fast;

    ll n,m, ans=0;
    cin>>n>>m;

    vector<pair<ll,ll>> match;

    for(ll i=0; i<m; i++)
    {
        ll a,b;
        cin>>a>>b;

        match.push_back({a,b});
    }


    sort(match.begin(), match.end(), [](const auto &a, const auto &b)
         {
             return a.second>b.second;

         });



         for(auto [n1,m1]:match)
         {
             if(n>0)
             {
                 if(n>=n1) ans+=(n1 * m1);
                 else if(n<n1) ans+=(n*m1);
             }

             n-=n1;
         }


         cout<<ans;



    return 0;
}
