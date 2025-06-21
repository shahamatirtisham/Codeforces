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
        cin >> n >> k;
        map<int, int> xAxis;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            if (x >= 0 && x <= n)
                xAxis[x]++;
        }

        int catPos = 0, ans = 0;

        vector<int> positions;
        for (auto &[pos, cnt] : xAxis)
            for (int i = 0; i < cnt; i++)
                positions.push_back(pos);

        sort(positions.rbegin(), positions.rend());

        for (int pos : positions)
        {
            if (pos > catPos)
            {
                ans++;
                catPos += n - pos;
            }
            else
            {
                break;
            }
        }

        cout << ans << '\n';
    }
}
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
        cin >> n >> k;
        map<int, int> xAxis;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            if (x >= 0 && x <= n)
                xAxis[x]++;
        }

        int catPos = 0, ans = 0;

        vector<int> positions;
        for (auto &[pos, cnt] : xAxis)
            for (int i = 0; i < cnt; i++)
                positions.push_back(pos);

        sort(positions.rbegin(), positions.rend());

        for (int pos : positions)
        {
            if (pos > catPos)
            {
                ans++;
                catPos += n - pos;
            }
            else
            {
                break;
            }
        }

        cout << ans << '\n';
    }
}
1593C - Save More Mice	
