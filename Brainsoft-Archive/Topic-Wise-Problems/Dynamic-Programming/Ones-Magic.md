# One's Magic

## 📝 Problem Statement
The number **1** symbolizes unity and the origin of all things. You are given a target number $n$ ($1 \le n \le 1,000,000$). You need to find the **minimum number of integers** whose sum equals $n$, where each integer in the set must consist only of the digit **1** (e.g., $1, 11, 111, 1111, \dots$).

### Example
- **Target:** $n = 35$
- **Numbers:** $11 + 11 + 11 + 1 + 1 = 35$
- **Output:** `5` (This is the minimum count).
- **Target:** $n = 134$
- **Output:** `4` ($111 + 11 + 11 + 1 = 134$).

---

## 💡 Key Insight
This problem is a variation of the **Change-making Problem**, which can be solved efficiently using **Dynamic Programming**. Our "coins" are the set $\{1, 11, 111, 1111, 11111, 111111\}$.

1.  **DP Array:** `dp[i]` stores the minimum numbers of "ones" integers needed to sum up to $i$.
2.  **Recurrence:** $dp[i] = \min(dp[i], dp[i - \text{coin}] + 1)$.
3.  **Precomputation:** Since we have multiple test cases and $n \le 1,000,000$, we precompute the DP table once to handle queries in $O(1)$.

---

## 🚀 Complexity
- **Preprocessing:** $O(n \times k)$, where $k$ is the number of "ones" integers (approx. 6).
- **Query:** $O(1)$ per test case.
- **Space:** $O(n)$ to store the DP table.

---

## 💻 Implementation

```cpp
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const double PI = acos(-1);
const double EPS = 1e-9;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAXN = 1000005;

int dp[MAXN];

// Precompute the minimum count for all values up to 1,000,000
void precompute() {
    vector<int> ones = {1, 11, 111, 1111, 11111, 111111};
    fill(dp, dp + MAXN, INF);
    dp[0] = 0;
    
    for (int coin : ones) {
        for (int i = coin; i < MAXN; i++) {
            if (dp[i - coin] != INF) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
}

void idea() {
    int n;
    if (cin >> n) {
        if (n < MAXN) cout << dp[n] << "\n";
    }
}

int main() {
    // Fast I/O optimized for competitive programming
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    // Perform precomputation once
    precompute();
    
    int T = 1;
    cin >> T;

    for(int C = 1; C <= T; C++) {
        idea();
    }
    return 0;
}

/**
 * Tags: Dynamic Programming, Math, Precomputation, Greedy, BUET, ICPC-Prep
 */