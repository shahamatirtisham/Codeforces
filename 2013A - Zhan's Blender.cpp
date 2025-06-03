#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long x, long long y) {
    if (n == 0) return 0;
    long long fc = (n + x - 1) / x;
    long long fpc = y;
    long long cn = (n + fpc - 1) / fpc;
    return max(fc, cn);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        cout << solve(n, x, y) << endl;
    }
    return 0;
}
