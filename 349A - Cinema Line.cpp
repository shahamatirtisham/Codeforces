#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

// Debugger templates
template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.F << ", " << p.S << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        bruh(args);             \
    } while (0)

void bruh()
{
    cerr << endl;
}

template <typename T>
void bruh(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void bruh(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    bruh(rest...);
}

// Template functions
template <typename T>
void read(T &x) { cin >> x; }
template <typename T>
void read(vector<T> &v)
{
    for (auto &x : v)
        cin >> x;
}
template <typename T, typename U>
void read(pair<T, U> &p) { cin >> p.F >> p.S; }
template <typename T>
void print(const T &x) { cout << x << ' '; }
template <typename T>
void print(const vector<T> &v)
{
    for (const auto &x : v)
        print(x);
    cout << endl;
}
template <typename T, typename U>
void print(const pair<T, U> &p) { cout << p.F << ' ' << p.S << endl; }

void sortString(string &str)
{
    sort(str.begin(), str.end());
}

int main()
{
    fast_io;
    int n;
    cin >> n;

    vector<int> bills(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> bills[i];
    }

    int count25 = 0, count50 = 0;

    for (int i = 0; i < n; ++i)
    {
        if (bills[i] == 25)
        {
            ++count25;
        }
        else if (bills[i] == 50)
        {
            if (count25 == 0)
            {
                cout << "NO" << endl;
                return 0;
            }
            --count25;
            ++count50;
        }
        else
        {
            if (count50 > 0 && count25 > 0)
            {
                --count50;
                --count25;
            }
            else if (count25 >= 3)
            {
                count25 -= 3;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
