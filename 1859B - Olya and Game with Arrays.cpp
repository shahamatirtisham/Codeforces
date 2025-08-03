#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        vector<int> min_vals;
        vector<int> second_min_vals;
        
        for (int i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            vector<int> a(s);
            for (int j = 0; j < s; j++)
            {
                cin >> a[j];
            }
            sort(a.begin(), a.end());
            v[i] = a;
            min_vals.push_back(a[0]);
            second_min_vals.push_back(a[1]);
        }
        
        if (n == 1)
        {
            cout << v[0][0] << endl;
            continue;
        }
        
        int total_min = *min_element(min_vals.begin(), min_vals.end());
        long long sum = 0;
        
        sort(second_min_vals.begin(), second_min_vals.end());
        for (int i = 1; i < n; i++)
        {
            sum += second_min_vals[i];
        }
        sum += total_min;
        
        cout << sum << endl;
    }
    return 0;
}
