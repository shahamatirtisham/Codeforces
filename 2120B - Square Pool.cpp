#include <bits/stdc++.h>

using namespace std;

void f(){
  int a,b;
  cin >> a >> b;
  int cnt = 0;
  for (int i = 0; i < a; i++){
    int w,x,y,z;
    cin >> w >> x >> y >> z;
    int m, c;
    if (((x==1) && (w==1)) || ((x==-1) && (w==-1))){
      m = 1, c = 0;
    }
    else {
      m = -1, c = b;
    }
    if (z == (y*m + c)){
      cnt++;
    }
  }
  cout << cnt << "\n";  
} 

int main(){
  int t; cin >> t;
  while (t--) f();
}
