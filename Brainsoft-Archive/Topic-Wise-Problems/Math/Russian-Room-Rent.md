# Russian Room Rent

## 📝 Problem Statement
To participate in the ICPC World Final, Muzahid and his team went to the Russia International Hotel. The hotel owner, Abdus Salam, challenged them to calculate their total room rent.

The base room rent is $X$ rubles. An additional tax of 1 ruble must be paid for every $Y$ rubles of the rent. If they solve this, the owner provides a $D$ percent discount on the total amount (Rent + Tax). Finally, if the amount after the discount is strictly lower than $L$ rubles, output **"YES"**; otherwise, output **"NO"**.

### Example
- **Input:** $X=100, Y=10, D=10, L=100$
- **Total Amount:** $100 + (100 / 10) = 110$ rubles.
- **Discounted Amount:** $110 - (110 \times 10 / 100) = 99$ rubles.
- **Logic:** $99 < 100 \implies$ **Output:** `YES`.

---

## 💡 Key Insight
This problem requires basic simulation using modular arithmetic and percentage calculations.

1.  **Tax Calculation:** The tax is calculated using floor division: $\lfloor X / Y \rfloor$.
2.  **Total Cost:** Sum the base rent $X$ and the calculated tax.
3.  **Discount Logic:** Apply the $D$ percent discount to the total cost. Use floating-point variables to maintain precision.
4.  **Floating Point Comparison:** When comparing the final amount with $L$, use a small epsilon ($10^{-9}$) to handle precision errors.

---

## 🚀 Complexity
- **Time Complexity:** $O(1)$ per test case.
- **Space Complexity:** $O(1)$ as only a few variables are stored.

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
const int LEN  = 2e6 + 3;

void idea() {
    double X, Y, D, L;
    if (!(cin >> X >> Y >> D >> L)) return;

    // Calculate tax: 1 ruble for every Y rubles
    double tax = floor(X / Y);
    double total_amount = X + tax;

    // Apply D percent discount
    double final_amount = total_amount - (total_amount * (D / 100.0));

    // Check if the final amount is strictly lower than L
    if (final_amount < L - EPS) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O optimized for competitive programming
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    int T = 1;
    cin >> T;

    for(int C = 1; C <= T; C++) {
        idea();
    }
    return 0;
}

/**
 * Tags: Math, Simulation, Floating-Point, BUET, ICPC-World-Final-Themed
 */