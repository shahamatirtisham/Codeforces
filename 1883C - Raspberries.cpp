#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (k != 4) {
            int min_steps = k;
            for (int i = 0; i < n; ++i) {
                int rem = a[i] % k;
                int steps = (rem == 0) ? 0 : (k - rem);
                if (steps < min_steps) {
                    min_steps = steps;
                }
            }
            cout << min_steps << '\n';
        } else {
            int min_steps = k;
            int even_count = 0;
            for (int i = 0; i < n; ++i) {
                int rem = a[i] % k;
                int steps = (rem == 0) ? 0 : (k - rem);
                if (steps < min_steps) {
                    min_steps = steps;
                }
                if (a[i] % 2 == 0) {
                    even_count++;
                }
            }
            int steps_for_two_evens = (even_count >= 2) ? 0 : (2 - even_count);
            cout << min(min_steps, steps_for_two_evens) << '\n';
        }
    }
    return 0;
}
