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
        ll n, counter=0;
        cin>>n;

        string s;
        cin>>s;

        for(ll i=0; i<n/2; i++)
        {
            if(s[i]!=s[n-i-1]) counter++;
            else break;
        }

        cout<<n-(2*counter)<<"\n";
    }

    return 0;
}
