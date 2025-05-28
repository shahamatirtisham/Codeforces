#include<bits/stdc++.h>
using namespace std;

using ll=long long;

#define fast cin.tie(0)->sync_with_stdio(0);

bool isPrime(ll n)
{
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0) return false;
    }

    return true;
}

int main()
{
    ll n,k, sum=0, counter=0;
    cin>>n>>k;

    vector<ll> v;

    for(ll i=2; i<=n; i++)
    {
        if(isPrime(i)) v.push_back(i);
    }

    for(ll i=0; i<v.size()-1; i++)
    {
        if((isPrime((v[i])+v[i+1]+1)==1) && (v[i]+v[i+1]+1)<=n) counter++;
    }

    if(counter>=k) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
