# Spicy Numbers (Mojar Gonit)

## 📝 Problem Statement
In "Mojar Gonit", a number is called a **Spicy Number** if all its digits are the same (e.g., $111, 77, 9$). Given a target number $N$ and a move limit $K$, you need to determine if you can reach $N$ starting from $0$ using at most $K$ spicy numbers through addition or subtraction.

If the minimum moves required to reach $N$ is $\le K$, output **"Alhamdulillah"**. Otherwise, output **"InShaAllah, next time"**.

### Example
- **Target ($N$):** $986$, **Moves ($K$):** $3$
- **Path:** $999 - 11 - 2 = 986$ (3 spicy numbers used)
- **Output:** `Alhamdulillah`
- **Target ($N$):** $369$, **Moves ($K$):** $3$
- **Path:** $333 + 33 + 3 = 369$ (3 spicy numbers used)
- **Output:** `Alhamdulillah`

---

## 💡 Key Insight
This is a shortest-path problem in an unweighted graph, which can be solved using **BFS (Breadth-First Search)**.



- Each number from $0$ to $MAXN$ is treated as a node.
- Adding or subtracting a spicy number represents an edge of weight $1$ connecting two nodes.
- BFS will naturally find the minimum number of steps needed to reach the target $N$.

---

## 🚀 Complexity
- **Time Complexity:** $O(N \times \text{count of spicy numbers})$ per test case.
- **Space Complexity:** $O(N)$ for the distance array and BFS queue.

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

int dist[MAXN];
vector<int> spicy;

// Precompute all spicy numbers (all digits same) up to MAXN
void precompute() {
    for (int len = 1; len <= 6; len++) {
        for (int digit = 1; digit <= 9; digit++) {
            string s(len, digit + '0');
            ll val = stoll(s);
            if (val < MAXN) spicy.push_back((int)val);
        }
    }
}

void idea() {
    int N, K;
    if (!(cin >> N >> K)) return;

    // BFS initialization
    queue<int> q;
    for(int i = 0; i < MAXN; i++) dist[i] = -1;

    q.push(0);
    dist[0] = 0;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        if (curr == N) break;

        for (int s : spicy) {
            // Addition logic
            if (curr + s < MAXN && dist[curr + s] == -1) {
                dist[curr + s] = dist[curr] + 1;
                q.push(curr + s);
            }
            // Subtraction logic
            if (curr - s >= 0 && dist[curr - s] == -1) {
                dist[curr - s] = dist[curr] + 1;
                q.push(curr - s);
            }
        }
    }

    if (dist[N] != -1 && dist[N] <= K) {
        cout << "Alhamdulillah" << endl;
    } else {
        cout << "InShaAllah, next time" << endl;
    }
}

int main() {
    ios::sync_with_stdio(0); 
    cin.tie(0);
    
    precompute();
    
    int T = 1;
    cin >> T;
    for(int C = 1; C <= T; C++) {
        idea();
    }
    return 0;
}

/**
 * Tags: BFS, Shortest Path, Math, Precomputation, BUET, Software-Interview
 */
