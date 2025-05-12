#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (n % p)
            cout << "YES\n";
        else
        {
            if ((n / p) * q == m)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
