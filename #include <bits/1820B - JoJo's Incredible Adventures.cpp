#include <bits/stdc++.h>
#define int long long
 
using namespace std;

void f(){
  string  v; cin >> v;
  int n = v.size();
  v += v;
  int cnt = 0, mxcnt = -1;
  for (int i = 0; i < 2*n-1; i++){
    if (v[i] == '1'){
      cnt++;
      if (cnt > mxcnt && i-cnt + 1 < n) mxcnt = cnt;
    }
    else cnt = 0;
  }
  int sum = 0 ;
  for (int i = 0; i < n; i++){
    sum = max(sum, (mxcnt-i)*(i+1));
  }
  cout << sum << "\n";
}
  
signed main()
{
  int t ;  cin >> t;
  while(t--) f();
}
