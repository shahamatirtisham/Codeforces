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
        ll n, k; cin >> n >> k;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
        }
        if(n!=k)
        {
            ll gg = -1;
            for(ll i=1; i<n; i++)
            {
                if(a[i]!=1)
                {
                    gg = i;
                    break;
                }
            }
            if(gg==-1)
            {
                cout << 2 << "\n";
            }
            else if(n-gg>=k-1)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 2 << "\n";
            }
            continue;
        }
        ll cnt = 1;
        for(ll i=1, j=1; i<n; i+=2, j++)
        {
            if(a[i]==j)
                cnt++;
            else
                break;
        }
        cout << cnt << "\n";
    }
}
