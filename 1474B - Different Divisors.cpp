#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> primes;

void sieve(int n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(100005); // Only once before all queries

    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;

        // Find the first prime > d
        int p1 = *lower_bound(primes.begin(), primes.end(), d + 1);
        // Find the first prime > (p1 + d - 1), or just > p1 + d
        int p2 = *lower_bound(primes.begin(), primes.end(), p1 + d);

        cout << 1LL * p1 * p2 << '\n';
    }
}
1474B - Different Divisors
