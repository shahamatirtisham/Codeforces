
 
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
        ll n;
        cin>>n;
 
        ll z = ((n - 1) * n) / 2;
        vl v(z);
 
        for(auto &x:v) cin>>x;
 
        sort(rall(v));
 
        ll k = 0;
 
        cout<<v[0]<<" ";
        for(ll i = 0; i < n - 1; i++)
        {
            cout<<v[k]<<" ";
            k += (1 + i);
        }       
        cout<<"\n";
    }
}
