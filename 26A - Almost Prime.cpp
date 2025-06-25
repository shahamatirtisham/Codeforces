#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<ll, bool> primes;
void sieve(ll n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i <= n; ++i)
    {
        if (is_prime[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= n; ++i)
    {
        if (is_prime[i])
        {
            primes[i] = true;
        }
    }
}

const int MAXN = 10000005;
ll a[MAXN] = {0};
int prime_factors(ll n, set<int> &s)
{
    int count = 0;
    if (n == 1)
        return 0;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            count++;
            s.insert(i);
            while (n % i == 0)
            {
                n /= i;
                s.insert(i);
            }
        }
    }
    if (n > 1)
    {
        count++;
        s.insert(n);
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
    // {

    // }
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        set<int> s;
        prime_factors(i, s);
        if (s.size() == 2)
            ans++;
    }
    cout << ans << endl;
}
