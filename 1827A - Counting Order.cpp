#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
void f(){
  int n ;cin >> n;
  vector <int> v(n);
  vector<int> r(n);
  vector <int> c(n);
  for (int& num : v) cin >> num;
  for (int& num : r) cin >> num;
  sort (v.begin(), v.end());
  sort (r.begin(),r.end());
  r.push_back(1e9+1);
  int j = 0;
  for (int i = 0; i < n; i++){
    while (v[i] > r[j]) j++;
    c[i] = j;
  }
  int res = 1;
  for (int i = 0; i < n; i++){
    res = (res*(c[i]-i)) % (long long)(1e9+7);
  }
  cout << res  << "\n";
}
 
  
 
  
  
signed main()
{
  ios ::sync_with_stdio(0);cin.tie(0);
  int t ;  cin >> t;
  while(t--) f();
}
