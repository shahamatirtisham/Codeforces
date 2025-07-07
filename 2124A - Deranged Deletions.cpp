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
        ll a[n], b[n];
        vector<ll> v;
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }
        sort(b, b+n);
        ll r=0;
        for(ll i=0; i<n; i++)
        {
            if(b[i]!=a[i])
            {
                r=1;
                break;
            }
        }
        if(r==0)
        {
            cout << "NO\n";
        }
        else
        {
            for(ll i=0; i<n; i++)
            {
                if(a[i]!=b[i])
                {
                    v.push_back(a[i]);
                }
            }
            cout << "YES\n";
            cout << v.size() << "\n";
            for(auto i=v.begin(); i!=v.end(); i++)
            {
                cout << (*i) << " ";
            }
            cout << "\n";
        }
    }
}
