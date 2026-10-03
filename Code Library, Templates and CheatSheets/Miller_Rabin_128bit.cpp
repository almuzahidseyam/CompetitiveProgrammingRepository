#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const double PI = acos(-1);
const double EPS = 1e-9;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int LEN  = 2e6 + 3;

using i128 = __int128_t;
using u128 = __uint128_t;
using u64 = unsigned long long;

u128 mulmod(u128 a, u128 b, u128 mod) {
    return (a * b) % mod;
}

u128 powmod(u128 a, u128 d, u128 mod) {
    u128 res = 1;
    while (d) {
        if (d & 1) res = mulmod(res, a, mod);
        a = mulmod(a, a, mod);
        d >>= 1;
    }
    return res;
}

bool millerRabin(u128 n, int iterations = 10) {
    if (n < 2) return false;
    static const u64 smallPrimes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    for (u64 p : smallPrimes) {
        if (n % p == 0) return n == p;
    }

    u128 d = n - 1, s = 0;
    while ((d & 1) == 0) d >>= 1, s++;

    mt19937_64 rng(42);
    uniform_int_distribution<u64> dist(2, (u64)-1);

    for (int i = 0; i < iterations; i++) {
        u128 a = dist(rng) % (n - 3) + 2;
        u128 x = powmod(a, d, n);
        if (x == 1 || x == n - 1) continue;

        bool composite = true;
        for (u128 r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n - 1) { composite = false; break; }
        }
        if (composite) return false;
    }
    return true;
}

__int128 read128(string s) {
    __int128 val = 0;
    for (char c : s)
        if (isdigit(c))
            val = val * 10 + (c - '0');
    return val;
}

void idea() {
    string s;
    cin >> s;
    __int128 n = read128(s);
    cout << (millerRabin(n) ? "Prime\n" : "Composite\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    for(int C = 1; C <= T; C++) {
        idea();
    }
    return 0;
}
