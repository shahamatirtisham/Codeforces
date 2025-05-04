#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> candies(n);
    int sum = 0;
    int count1 = 0, count2 = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> candies[i];
        sum += candies[i];
        if (candies[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }
    
    if (sum % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    int half = sum / 2;
    
    if (half % 2 == 0 || count1 >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
