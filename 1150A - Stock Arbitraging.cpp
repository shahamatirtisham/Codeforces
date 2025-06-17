#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, r;
    cin >> n >> m >> r;
    vector<int> a(n), b(m);
    for (int &e : a)
        cin >> e;
    for (int &e : b)
        cin >> e;
    int temp = r;
    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(b.begin(), b.end());
    int shares = r / mn;
    temp -= shares * mn;
    temp += shares * mx;
    if (temp < r)
        cout << r << endl;
    else
        cout << temp << endl;
}
