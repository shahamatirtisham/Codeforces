#include <bits/stdc++.h>
using namespace std;

// Typedefs
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

// Macros
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define PB push_back
#define F first
#define S second
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define mem(a, b) memset(a, b, sizeof(a))
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)
#define mod 1000000007
#define inf 1e18
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)

int main()
{
    fast_io;
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort the sequence
    sort(a.begin(), a.end());

    // Handle edge cases
    if (k == 0) {
        // x must be less than the smallest element
        if (a[0] > 1) {
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
        return 0;
    }

    if (k == n) {
        // x must be greater than or equal to the largest element
        cout << a[n - 1] << endl;
        return 0;
    }

    // General case
    if (a[k - 1] == a[k]) {
        // No valid x exists
        cout << -1 << endl;
    } else {
        // x can be any number between a[k-1] and a[k]
        cout << a[k - 1] << endl;
    }

    return 0;
}
