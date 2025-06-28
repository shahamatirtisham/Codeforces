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
        ll k, a, b, x, y; cin >> k >> a >> b >> x >> y;
        ll ans1=-1, ans2=-1;
        ll g=k;
        if(k>=a)
        {
            if(k==a)
            {
                ans1 = 1;
                k-=x;
            }
            else
            {
                ans1 = (k-a)/x;
                ans1++;
                k-=(ans1*x);
            }
            if(k>=b)
            {
                if(k==b)
                {
                    ans1+=1;
                    k-=y;
                }
                else
                {
                    ans1+=(k-b)/y;
                    ans1++;
                }
            }
        }
        k=g;
        swap(a, b);
        swap(x, y);
        if(k>=a)
        {
            if(k==a)
            {
                ans2 = 1;
                k-=x;
            }
            else
            {
                ans2 = (k-a)/x;
                ans2++;
                k-=(ans2*x);
            }
            if(k>=b)
            {
                if(k==b)
                {
                    ans2+=1;
                    k-=y;
                }
                else
                {
                    ans2+=(k-b)/y;
                    ans2++;
                }
            }
        }
        cout << max((ll)0,max(ans1, ans2)) << "\n";
    }
}
