#include <bits/stdc++.h>
using namespace std;

using ll = long long;
static const ll MOD = 1e9 +7;
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define F first
#define S second
#define vpll vector<pair<ll, ll>>
#define lb lower_bound
#define ub upper_bound
#define gcd __gcd
#define vll vector<ll>
#define mp make_pair
#define mxbt 63 - __builtin_clzll
#define mnbt __builtin_ctzll
#define uos unordered_set<ll>
const int N = 1e5 + 10;

void solve() {
    ll n, m; cin >> n >> m;
    if ((n==1 || m==1) || (n==2 && m==2) ) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
    solve();
    }
}
