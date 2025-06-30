 
 
 
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define PB push_back
#define MP make_pair
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
 
typedef pair<ll, ll> pl;
typedef vector<ll> vl;
typedef vector<vl> vll;
 
ll power(ll x, ll y, ll p) 
{ 
    ll res = 1; 
 
    x = x % p;
 
    if (x == 0) return 0;
 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
 
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 
} 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
 
    ll t;
    cin>>t;
 
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
 
        vll v;
        for(ll i = 0; i < n; i++)
        {
            vl temp(n);
            for(auto &x:temp) cin>>x;
 
            v.push_back(temp);
        }
 
        ll res = 0;
 
        for(ll i = 0; i < (n / 2); i++)
        {
            for(ll j = 0; j < n; j++)
            {
                if(v[i][j] != v[n - 1 - i][n - 1 - j]) res++;
            }
        }
 
        if(n % 2) for(ll i = 0; i < (n / 2); i++) if(v[n / 2][i] != v[n / 2][n - 1 - i]) res++;
 
        if(res > k) cout<<"NO\n";
        else 
        {
            k -= res;
            if(n % 2) cout<<"YES\n";
            else if(k % 2) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}