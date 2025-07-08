#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define F first
#define S second
using namespace std;
constexpr ll inf = 1e18;
const int N = 2e5+5;
const ll M = 1000;
// const ll MOD = 998244353;
// const ll MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc = 1, C = 1;
    cin >> tc;
    while (tc--) 
    {
        // cout << "Case " << C << ": "; C++;
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
        }
        if(a[0]<=a[1])
        {
            cout << a[0]*2 << "\n";
        }
        else
        {
            cout << a[0]+a[1] << "\n";
        }
    }
}
