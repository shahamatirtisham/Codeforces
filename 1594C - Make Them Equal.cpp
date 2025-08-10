#include <bits/stdc++.h>

using namespace std;

int gcd (int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

void f(){
    int n; cin >> n;
    char ch; cin >> ch;
    string v; cin >> v;
    vector <int> r;
    for (int i = 0; i < n; i++){
        if (v[i] != ch){
            r.push_back(i+1);
        }
    }
    int sum = 0;
    if (r.size() == 0){
        cout << 0 << "\n";
        return;
    }
    for (int i = n-1; i >= n/2; i --){
        if (v[i] == ch){
            cout << "1\n" << i+1 << "\n";
            return;
        }
    }
    cout << "2\n";
    cout << n-1 << " " << n << "\n";
}

signed main(){
    int t ; cin >> t;
    while (t--) f();
}
