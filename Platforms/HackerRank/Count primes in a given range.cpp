// Count primes in a given range
// Problem link: https://www.hackerrank.com/contests/srbd-code-contest-2022-round-1/challenges/primes-in-range

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

const int SIEVE = 1e7 + 20;
vector<int> prime;
bool vis[SIEVE] = {0}; // SIEVE = 1e7

void sieve()
{
    prime.clear();
    for (int i = 3; i * i <= SIEVE; i += 2)
    {
        if (!vis[i])
        { // vis[i]==0; vis[i] not visited
            for (int j = i * i; j <= SIEVE; j += (i << 1)) // i<<1 = 2*i
            { 
                vis[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= SIEVE; i += 2)
    {
        if (!vis[i])
            prime.push_back(i);
    }
}

void solve()
{
    ll left, right;
    cin >> left >> right;

    auto L = lower_bound(prime.begin(), prime.end(), left);
    auto R = upper_bound(prime.begin(), prime.end(), right);

    ll distance1 = distance(prime.begin(), L);
    ll distance2 = distance(prime.begin(), R);

    ll how_many_primes_in_this_range = distance2 - distance1;

    cout << how_many_primes_in_this_range << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    ll testcase = 1;
    //cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}