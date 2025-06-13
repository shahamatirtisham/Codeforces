#include<bits/stdc++.h>
using namespace std;

using ll=long long;

#define fast cin.tie(0)->sync_with_stdio(0)
#define all(v) v.begin(), v.end()

int main()
{
    fast;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        cout<<2*n-3<<"\n";


        for(ll i=1, j=n; i<n; i++, j--)
        {
            cout<<i<<" "<<1<<" "<<j<<"\n";
        }

        for(ll i=3, j=n-1; i<=n; i++, j--)
        {
            cout<<i<<" "<<j<<" "<<n<<"\n";
        }
    }


    return 0;
}
