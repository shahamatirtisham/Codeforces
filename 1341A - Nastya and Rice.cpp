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
	int t;
	int n, a, b, c, d;
	int ABsum, ABsub, CDsum, CDsub;
	cin >> t;
	while (t--)
	{
		ABsum = ABsub = CDsum = CDsub = 0;
		cin >> n >> a >> b >> c >> d;
		ABsum = a + b;
		ABsub = a - b;

		CDsum = c + d;
		CDsub = c - d;

		if ((n * ABsum >= CDsub) && (n * ABsub <= CDsum))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
