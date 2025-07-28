#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// map<ll, bool> primes;
// void sieve(ll n)
// {
//     vector<bool> is_prime(n + 1, true);
//     is_prime[0] = is_prime[1] = false;

//     for (ll i = 2; i * i <= n; ++i)
//     {
//         if (is_prime[i])
//         {
//             for (ll j = i * i; j <= n; j += i)
//             {
//                 is_prime[j] = false;
//             }
//         }
//     }

//     for (ll i = 2; i <= n; ++i)
//     {
//         if (is_prime[i])
//         {
//             primes[i] = true;
//         }
//     }
// }

// const int MAXN = 10000005;
// ll a[MAXN] = {0};
// int prime_factors(ll n, set<int> &s)
// {
//     int count = 0;
//     if (n == 1)
//         return 0;
//     for (ll i = 2; i * i <= n; ++i)
//     {
//         if (n % i == 0)
//         {
//             count++;
//             s.insert(i);
//             while (n % i == 0)
//             {
//                 n /= i;
//                 s.insert(i);
//             }
//         }
//     }
//     if (n > 1)
//     {
//         count++;
//         s.insert(n);
//     }
//     return count;
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<int> dq(n);
        for (int &e : dq)
        {
            cin >> e;
        }
        int l = 0, r = n - 1;
        string s;
        int idx = 0;
        while (l <= r)
        {
            if (idx % 2 == 0)
            {
                if (dq[l] < dq[r])
                {
                    s += 'L';
                    idx++;
                    l++;
                }
                else
                {
                    s += 'R';
                    idx++;
                    r--;
                }
            }
            else
            {
                if (dq[l] > dq[r])
                {
                    s += 'L';
                    idx++;
                    l++;
                }
                else
                {
                    s += 'R';
                    idx++;
                    r--;
                }
            }
        }
        cout << s << endl;
    }
}
