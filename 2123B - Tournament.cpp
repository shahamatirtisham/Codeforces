#include <bits/stdc++.h>
using namespace std;

using ll =          long long;
static const ll     MOD  = 998'244'353;
#define all(v)      (v).begin(), (v).end()
#define rall(v)     (v).rbegin(), (v).rend()
#define pb          push_back
#define F           first
#define S           second
#define vpll        vector<pair<ll, ll>>
#define lb          lower_bound
#define ub          upper_bound
#define gcd         __gcd
#define vll         vector<ll>
#define mp          make_pair
#define mxbt        63-__builtin_clzll
#define mnbt        __builtin_ctzll
#define uos         unordered_set<ll>
const int N=        1e5+10;
ll dp[N];

void solve() {
    ll n, j, k; cin>>n>>j>>k;
    ll ans=-1, m=-1;
    for(ll i=0; i<n; i++) {
        ll x; cin>>x;
        if (i==j-1) {
            ans = x;
        }
        m = max(m, x);
    }
    if (k==1 && m!=ans) cout<<"NO\n";
    else cout<<"YES\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; while(t--)
        solve();
}
