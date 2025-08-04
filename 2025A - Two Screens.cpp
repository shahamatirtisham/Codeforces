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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc = 1, C = 1;
    cin >> tc;
    while (tc--) 
    {
        // cout << "Case " << C << ": "; C++;
        string s1, s2; cin >> s1 >> s2;
        ll n1 = s1.size(), n2 = s2.size();
        if(n1>n2)
        {
            swap(s1, s2);
            swap(n1, n2);
        }
        ll cnt = 0;
        for(ll i=0; i<n1; i++)
        {
            if(s1[i]==s2[i])
                cnt++;
            else
                break;
        }
        cout << min(n1+n2 , n1+n2-cnt+1) << "\n";
    } 
}
