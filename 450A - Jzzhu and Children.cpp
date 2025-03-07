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
	int n, m;
	cin >> n >> m;
	queue<pair<int, int>> q;

	for (int i = 1; i <= n; i++)
	{
		int candies;
		cin >> candies;
		q.push({i, candies});
	}

	int last_child = 0;
	while (!q.empty())
	{
		auto [child, candies] = q.front();
		q.pop();

		if (candies > m)
		{
			q.push({child, candies - m});
		}
		last_child = child;
	}

	cout << last_child << endl;
	return 0;
}
