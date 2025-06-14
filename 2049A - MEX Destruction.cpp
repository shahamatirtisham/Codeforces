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
        deque<int> a(n);
        for (int &e : a)
            cin >> e;
        while (!a.empty() && a.front() == 0)
            a.pop_front();
        while (!a.empty() && a.back() == 0)
            a.pop_back();
        if (a.empty())
        {
            cout << 0 << endl;
            continue;
        }
        bool zero = false;
        for (int i : a)
        {
            if (i == 0)
            {
                zero = true;
                break;
            }
        }
        if (zero)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
}