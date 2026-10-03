# Count Pairs in Range

## 📝 Problem Statement
You are given $N$ sorted pairs $(x, y)$. For each query $(L, R)$, count how many pairs satisfy:
1. $x \ge L$
2. $y \le R$

### Example
- **Pairs:** `(1, 3), (7, 9), (11, 13), (17, 19)`
- **Query:** `L=2, R=9`
- **Output:** `1`
- **Explanation:** Only the pair `(7, 9)` satisfies both conditions ($7 \ge 2$ and $9 \le 9$).

---

## 💡 Key Insight
Since the pairs are sorted and $y$ increases as $x$ increases, the valid pairs form a continuous segment in the array.



- We use `lower_bound` on the $x$ values to find the first index where $x \ge L$.
- We use `upper_bound` on the $y$ values to find the first index where $y > R$.
- The difference between these two indices (`end - start`) gives the total count.

---

## 🚀 Complexity
- **Preprocessing:** $O(N \log N)$ if sorting is required.
- **Query:** $O(\log N)$ per query using Binary Search.
- **Space:** $O(N)$ to store the vectors.

---

## 💻 Implementation
This solution uses the standard **brainsoft** template.

```cpp
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void idea() {
    int N; 
    if (!(cin >> N)) return;

    vector<ll> First(N), Second(N);
    for (int i = 0; i < N; i++) {
        cin >> First[i] >> Second[i];
    }

    int Q; cin >> Q;
    while (Q--) {
        ll L, R; cin >> L >> R;

        // Find the start: first index where x >= L
        int start = lower_bound(First.begin(), First.end(), L) - First.begin();
        
        // Find the end: first index where y > R
        int end = upper_bound(Second.begin(), Second.end(), R) - Second.begin();

        // Count is end - start
        int ans = end - start;

        cout << max(0, ans) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int T = 1;
    for(int C = 1; C <= T; C++) {
        idea();
    }
    return 0;
}
