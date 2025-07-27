#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define F first
#define S second
using namespace std;
constexpr ll inf = 1e18;
const ll N = 2e5+5;
const ll M = 1000;
// const ll MOD = 998244353;
// const ll MOD = 1000000007;
 
void input(ll a[], ll n)
{
    for(ll i=0; i<n; i++)
    {
        cin >> a[i];
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll tc = 1, C = 1;
    cin >> tc;
    while (tc--) 
    {
        // cout << "Case " << C << ": "; C++;
        ll n, x, t; cin >> n >> x >> t;
        ll gg = min(t/x, n-1);
        ll ans = (gg*(gg+1))/2;
        ans+=(n-1-gg)*gg;
        cout << ans << "\n";
    }
}
