
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    ll x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;

        if(x > y){
            swap(x,y);
        }
        ll ans1 = 0, ans2 = 0;
        ans1 = x*a + y*a;
        ll z = y - x;
        ans2 = z*a + x * b;

        cout<<min(ans1,ans2)<<endl;

    }

    return 0;
}
