// Modular Arithmatic
// 2^100 কে 17 দিয়ে ভাগ করলে ভাগশেষ কত হয় সেটা কি তুমি ওভারফ্লো এড়িয়ে নির্ণয় করতে পারবে? 
// O(n) এ পারলে O(log2n) কমপ্লেক্সিটি তে পারবে?

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

ll bigmod(ll a, ll b, ll m)
{
    if (b == 0) return true;
    if (b % 2 == 0)
    {
        long int x = bigmod(a, b / 2, m);
        return (x * x) % m;
    }
    else return ((long int)a % m * bigmod(a, b - 1, m)) % m;
}

void solve()
{
    long int base, power, mod;
    cin >> base >> power >> mod;
    cout << bigmod(base, power, mod) << endl;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll testcase = 1;
    //cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}
// Practice problem-01: https://onlinejudge.org/external/3/374.html
// Practice problem-02: https://onlinejudge.org/external/101/10127.html
