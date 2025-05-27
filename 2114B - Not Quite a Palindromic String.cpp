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
        int n, k;
        string s;
        cin >> n >> k >> s;
        int cnt0 = 0;
        for (char c : s)
            if (c == '0')
                cnt0++;
        int m = n / 2;
        int yo = cnt0 - m + k;
        if (yo < 0 || yo % 2)
        {
            cout << "NO\n";
            continue;
        }
        int a = yo / 2;
        if (0 <= a && a <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
