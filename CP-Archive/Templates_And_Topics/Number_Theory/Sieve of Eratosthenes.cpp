// Sieve of Eratosthenes

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

const int SIEVE = 1e8 + 20; // 1e8 operation takes 716 ms, 147136 KB, 1e7 operation takes 31 ms, 15980 KB (CF custom test)
vector<int> prime;
bool vis[SIEVE] = {0}; // SIEVE = 1e7

void sieve()
{
    prime.clear();
    for (int i = 3; i * i <= SIEVE; i += 2)
    {
        if (!vis[i])
        {                                                  // vis[i]==0; vis[i] not visited
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
    // if needed, then write your code here
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    sieve();
    cout << "Prime array size = " << prime.size() << endl;
    cout << "First prime is = " << prime[0] << endl;
    cout << "Last prime is = " << prime[prime.size() - 1] << endl;
    ll testcase = 1;
    // cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}