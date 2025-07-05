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
    ll a, x, y; cin>>a>>x>>y;
    if(abs(y-x)<abs(a-x) || abs(y-x)<abs(a-y)) cout<<"YES\n";
    else cout<<"NO\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; while(t--)
        solve();
}2112A - Race
