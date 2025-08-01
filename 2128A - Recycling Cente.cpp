#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp> 
 
using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update > pbds;
// find_by_order, order_by_key
 
#define sp << " " << 
#define ll long long
#define ld long double
#define pb push_back
#define F first
#define S second
#define PI 3.1415926535897932384626
 
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define sortrall(x) sort(rall(x))
 
#define printv(v) for(auto x : v) cout << x << " "; cout << "\n"
#define printm(m) for(auto x : m) cout << x.F sp x.S << "\n"
 
#define make_unique(x) sortall(x); (x).resize(unique(all(x)) - (x).begin())
#define numtobin(n) bitset<32>(n).to_string() 
#define bintoint(bin_str) stoi(bin_str, nullptr, 2)
 
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
template<typename T1, typename T2>
using safe_map = unordered_map<T1, T2, custom_hash>;
 
template<typename T>
using safe_set = unordered_set<T, custom_hash>;
 
template<typename T>
void debug(T x) { cerr << x << endl; }
 
template<typename T, typename... Args>
void debug(T x, Args... args) { cerr << x << " "; debug(args...); }
 
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
}
 
void fraction() {
    cout.unsetf(ios::floatfield); 
    cout.precision(10); 
    cout.setf(ios::fixed,ios::floatfield);
}
 
void yn(bool res, bool cap = true) {
    vector<string> s = {"Yes", "YES", "No", "NO"};
    cout << ((res) ? s[0 + cap] : s[2 + cap]) << "\n";
}
 
void chmin(ll &x, ll y) { x = min(x, y); }
void chmax(ll &x, ll y) { x = max(x, y); }
 
inline ll nxt() { ll x; cin >> x; return x;}
inline ld nxtD() { ld x; cin >> x; return x;}
inline string nxtStr() { string x; cin >> x; return x;}
 
const int mod = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
 
void proc(){
 
}
 
void solve() {
    int n, c; cin >> n >> c;
    priority_queue<ll> pq;
    for(int i = 0; i < n; i++) {
        pq.push(nxt());
    }

    ll ans = 0;
    ll cnt = 0;
    while(pq.size()) {
        ll x = pq.top();
        if((x * (1ll << cnt)) > c) ans++;
        else cnt = min(cnt + 1, 31ll);
        pq.pop();
    }

    cout << ans << "\n";
}
 
int main() {
    fastIO(); 
    proc();
 
    int tc = 1;
    tc = nxt();
    for (int t = 1; t <= tc; t++) {
        // cout << "Case " << t << ": ";
        solve();
    }
}
