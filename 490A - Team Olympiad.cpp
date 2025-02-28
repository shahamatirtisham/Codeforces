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
	int a;
	cin >> a;
	vector<int> b, c, d;
	for (int i = 1; i <= a; i++)
	{
		int e;
		cin >> e;
		if (e == 1)
			c.push_back(i);
		else if (e == 2)
			b.push_back(i);
		else if (e == 3)
			d.push_back(i);
	}
	int f = min(b.size(), min(c.size(), d.size()));
	cout << f << endl;
	for (int i = 0; i < f; i++)
	{
		cout << b[i] << " " << c[i] << " " << d[i] << endl;
	}
}

