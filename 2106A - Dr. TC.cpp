#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++) {
            string p = s; 
            if (p[i] == '1') {
                p[i] = '0';
            } else {
                p[i] = '1';
            }
            for (int j = 0; j < n; j++) {
                if (p[j] == '1') {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
