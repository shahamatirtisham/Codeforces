#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int maxi = max(a,b);
        int mini = min(a,b);
        if(c>mini && c<maxi){ 
            if(d>mini && d<maxi){
                cout << "NO" << endl;
            }
            else cout << "YES" << endl;
        
        }
        else if(d>mini && d<maxi){ 
            if(c>mini && c<maxi){
                cout << "NO" << endl;
            }
            else cout << "YES" << endl;
        
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}
