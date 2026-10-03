# Mod To Zero

## 📝 Problem Statement
You are given an array of $N$ natural numbers. The goal is to make the **total sum** of the array divisible by at least **one** of its elements using the minimum number of operations.

An operation consists of:
1. Adding 1 to any element.
2. Subtracting 1 from any element.

If the total sum is already divisible by any of its elements, the answer is `0`.

### Example
- **Array:** `[9, 4, 6]` (Total Sum = 19)
- **Logic:** - $19 \pmod 9 = 1$ (1 subtraction needed)
  - $19 \pmod 4 = 3$ (3 subtractions or 1 addition needed)
  - $19 \pmod 6 = 1$ (1 subtraction needed)
- **Output:** `1`
- **Explanation:** By subtracting 1 from the second element ($4 \to 3$), the new sum becomes 18, which is divisible by 3.

---

## 💡 Key Insight (Greedy/Math)
The problem asks for the minimum operations to satisfy $Sum \equiv 0 \pmod{a_i}$ for any $i$.



For each element $a_i$ in the array:
- The number of subtractions needed to make the sum divisible by $a_i$ is `Sum % a[i]`.
- The number of additions needed to make the sum divisible by $a_i$ is `a[i] - (Sum % a[i])`.
- We simply need to find the minimum of these two values across all $a_i$ in the array.

---

## 🚀 Complexity
- **Time Complexity:** $O(N)$ per test case to calculate the sum and iterate through the array.
- **Space Complexity:** $O(N)$ to store the array elements.

---

## 💻 Implementation
This solution uses the standard **brainsoft** template.

```cpp
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int INF = 1e9;

void idea() {
    int n;
    if (!(cin >> n)) return;

    vector<ll> a(n);
    ll total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    ll min_ops = 2e18; // Initialize with a very large value

    for (int i = 0; i < n; i++) {
        ll remainder = total_sum % a[i];
        
        if (remainder == 0) {
            min_ops = 0;
            break;
        }

        // Option 1: Subtract 'remainder' amount from any element
        // Option 2: Add 'a[i] - remainder' amount to any element
        ll current_min = min(remainder, a[i] - remainder);
        min_ops = min(min_ops, current_min);
    }

    cout << min_ops << "\n";
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int T;
    cin >> T; // Number of test cases
    while(T--) {
        idea();
    }
    return 0;
}