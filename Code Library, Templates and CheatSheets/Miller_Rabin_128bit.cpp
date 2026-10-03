#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using u128 = __uint128_t;
using u64 = unsigned long long;

u128 addmod(u128 a, u128 b, u128 mod) {
    return a >= mod - b ? a - (mod - b) : a + b;
}

u128 mulmod(u128 a, u128 b, u128 mod) {
    a %= mod;
    u128 res = 0;
    while (b) {
        if (b & 1) res = addmod(res, a, mod);
        b >>= 1;
        if (b) a = addmod(a, a, mod);
    }
    return res;
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

u128 randomBelow(u128 bound) {
    static mt19937_64 rng([] {
        random_device rd;
        array<unsigned int, 8> seed{};
        for (auto &x : seed) x = rd();
        seed_seq seq(seed.begin(), seed.end());
        return mt19937_64(seq);
    }());
    u128 threshold = -bound % bound;
    u128 x;
    do {
        u64 high = rng(), low = rng();
        x = (u128(high) << 64) | low;
    } while (x < threshold);
    return x % bound;
}

bool millerRabin(u128 n, int iterations = 64) {
    if (iterations < 1) throw invalid_argument("iterations must be positive");
    if (n < 2) return false;
    static const u64 smallPrimes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (u64 p : smallPrimes) {
        if (n % p == 0) return n == p;
    }
    u128 d = n - 1;
    int s = 0;
    while ((d & 1) == 0) d >>= 1, ++s;
    for (int i = 0; i < iterations; ++i) {
        u128 a = randomBelow(n - 3) + 2;
        u128 x = powmod(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool composite = true;
        for (int r = 1; r < s; ++r) {
            x = mulmod(x, x, n);
            if (x == n - 1) {
                composite = false;
                break;
            }
        }
        if (composite) return false;
    }
    return true;
}

bool read128(const string &s, u128 &value) {
    if (s.empty()) return false;
    value = 0;
    const u128 limit = ~u128(0);
    for (char c : s) {
        if (c < '0' || c > '9') return false;
        unsigned int digit = c - '0';
        if (value > (limit - digit) / 10) return false;
        value = value * 10 + digit;
    }
    return true;
}

void idea() {
    string s;
    if (!(cin >> s)) return;
    u128 n;
    if (!read128(s, n)) {
        cout << "Invalid input\n";
        return;
    }
    cout << (millerRabin(n) ? "Prime\n" : "Composite\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    if (!(cin >> T) || T < 0) return 0;
    for (int C = 0; C < T; ++C) idea();
    return 0;
}
