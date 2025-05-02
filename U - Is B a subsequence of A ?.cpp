#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            j++; 
        }
        i++; 
    }
    
    if (j == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
