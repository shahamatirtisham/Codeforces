#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    set<pair<string, string>> pata;

    while(n--){
        string patas, rong;
        cin >> patas >> rong;
        pata.insert({patas, rong});
    }
    cout << pata.size() << endl;


    return 0;
}
