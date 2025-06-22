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
const ll MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc = 1, C = 1;
    cin >> tc;
    while (tc--) 
    {
        // cout << "Case " << C << ": "; C++;
        ll l[3], b[3];
        cin >> l[0] >> b[0] >> l[1] >> b[1] >> l[2] >> b[2];
        // cin >> b[0] >> b[1] >> b[2];
        ll one = b[0] + b[1];
        ll two = b[0] +b[2];
        ll three = b[1] +b[2];
        ll all = one+b[2];
        if(l[1]==l[0] && l[1]==l[2] && l[1]==all)
        {
            cout << "YES\n";
            continue;
        }
        if(b[0]==b[1] && b[0]==b[2] && l[0]+l[1]+l[2]==b[0])
        {
            cout << "YES\n";
            continue;
        }
        if(b[0]==b[1]+b[2] && l[2]==l[1] && l[2]+l[0]==b[0])
        {
            cout << "YES\n";
            continue;
        }
        if(l[0]==l[2]+l[1] && b[1]==b[2] && l[0]==b[0]+b[1])
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}
