#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define fast cin.tie(0)->sync_with_stdio(0)

int main() {
    fast;

    ll t;
    cin>>t;

    while(t--)
    {
        ll x, mini=INT_MAX;
        cin>>x;

        while(x>0)
        {
            mini=min(mini, x%10);
            x/=10;
        }

        cout<<mini<<"\n";

    }
    return 0;
}
