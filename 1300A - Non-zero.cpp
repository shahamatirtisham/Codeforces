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
        int n;
        cin >> n;
        int sum = 0;
        int ans = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                ans++;
                sum += x + 1;
            }
            else
                sum += x;
        }
        if (sum == 0)
            ans++;
        cout << ans << endl;
    }
}
