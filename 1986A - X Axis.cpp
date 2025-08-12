#include <bits/stdc++.h>
using namespace std;


int main() {


    int t;
    cin >> t;
    while (t--) {
        int n = 3;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        cout << v.back() - v.front() << '\n';
    }
    return 0;
}
