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
    int n;
    cin >> n;
    vector<int> arr(n);
    int shurur_one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            shurur_one++;
        }
    }
    int max_diff = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int one_to_zero = 0;
            int zero_to_one = 0;
            for(int k=i; k<=j; k++){
                if(arr[k]==1) one_to_zero++;
                else zero_to_one++;
            }
            int barse = zero_to_one - one_to_zero;
            max_diff = max(max_diff, barse);
        }
    }

    if (shurur_one == n) {
        cout << n - 1 << endl;
    } else {
        cout << shurur_one + max_diff << endl;
    }

    return 0;
}
