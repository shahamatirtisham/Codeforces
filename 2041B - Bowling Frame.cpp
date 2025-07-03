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

ll k(ll b,ll w) {
    ll l = 0, h = 10000000, n=0;
    b+=w;
    while(l<=h) {
        ll m = (l+h)/2;
        ll res = (m*(m+1))/2;
        if(res>b) h = m-1;
        else if(res<b) {
            l = m+1;
            n = m;
        }
        else {
            n = m;
            break;
        }
    }
    return n;
}

void solve() {
    ll b, w; cin>>b>>w;
    cout<<k(b, w)<<"\n";
    // ll cnt=0;
    // for (ll i=1; ; i++) {
    //     if (b-i>i) {
    //         b-=i;
    //         cnt++;
    //     }
    //     else if (w-i>i) {
    //         w-=i;
    //         i++;
    //     }
    //     else if (w>=i||b>=i) {
    //         cnt++;
    //         break;
    //     }
    //     else
    //         break;
    // }
    // cout << cnt << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; while(t--)
        solve();
}
