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
        ll a, b; cin >> a >> b;
        if(a==b)
        {
            cout << "0 0\n";
            continue;
        }
        if(a>b)
            swap(a,b);
        ll ans1 = b-a;
        ll gg = b%ans1;
        ll wp = ans1-gg;
        cout << ans1 << " " << min(gg, wp) << "\n";
    }
}
