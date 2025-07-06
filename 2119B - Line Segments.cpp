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
        ll px, py, qx, qy; cin >> px >> py >> qx >> qy;
        ll a[n];
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        ld len = (px-qx)*(px-qx) + (py-qy)*(py-qy);
        len = sqrt((ld)len);
        if(sum<len)
        {
            cout << "No\n";
            continue;
        }
        else if(sum==len)
        {
            cout << "Yes\n";
            continue;
        }
        sort(a, a+n);
        if(a[n-1]<len)
            cout << "Yes\n";
        else if(a[n-1]-len>sum-a[n-1])
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}
