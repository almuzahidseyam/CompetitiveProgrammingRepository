# Find Your Shortest Path!

## 📝 Problem Statement
You are given a bidirectional graph with $n$ nodes and $m$ edges. Each edge $(u, v)$ has a specific weight $w$ representing the cost. Your task is to use the **Dijkstra Algorithm** to find the minimum cost to travel from a starting node $a$ to a goal node $b$.

If it is impossible to reach node $b$ from node $a$, output **"not possible"**.

### Example
- **Input:** $n=3, m=3, a=2, b=0$. Edges: $(0, 1, 100), (0, 2, 200), (1, 2, 50)$.
- **Logic:**
    - Directly $2 \to 0$: Cost 200.
    - Via node 1 ($2 \to 1 \to 0$): Cost $50 + 100 = 150$.
- **Output:** `Case #2: 150`.

---

## 💡 Key Insight
Dijkstra's Algorithm finds the shortest path by always expanding the node with the minimum current distance using a priority queue.



1.  **Min-Priority Queue:** Stores pairs of `{distance, node}` to ensure we always pick the cheapest node next.
2.  **Relaxation:** For each neighbor, if a shorter path is found via the current node, we update its distance and push it into the queue.
3.  **Graph Representation:** An adjacency list is used to handle the bidirectional edges efficiently.

---

## 🚀 Complexity
- **Time Complexity:** $O((N + M) \log N)$ per test case, where $N$ is nodes and $M$ is edges.
- **Space Complexity:** $O(N + M)$ to store the adjacency list and distance array.

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
const int MAXN = 20005;

vector<pair<int, int>> adj[MAXN];
int dist[MAXN];
bool vis[MAXN];

void idea() {
    int n, m, a, b;
    if (!(cin >> n >> m >> a >> b)) return;

    // Resetting for each test case
    for (int i = 0; i < MAXN; i++) {
        adj[i].clear();
        dist[i] = INF;
        vis[i] = false;
    }

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[a] = 0;
    pq.push({0, a});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (vis[u]) continue;
        vis[u] = true;

        if (u == b) break;

        for (auto &edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    if (dist[b] == INF) {
        cout << "not possible" << endl;
    } else {
        cout << dist[b] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    cin >> T;
    for (int C = 1; C <= T; C++) {
        cout << "Case #" << C << ": ";
        idea();
    }
    return 0;
}

/**
 * Tags: Dijkstra, Graph Theory, Shortest Path, Priority Queue, BUET, ICPC-Prep
 */
