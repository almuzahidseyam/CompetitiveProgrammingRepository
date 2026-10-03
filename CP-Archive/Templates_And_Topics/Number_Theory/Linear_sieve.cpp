// Linear_Sieve
// the running time of O(n) is better than O(nlogn) of 
// the classic sieve of Eratosthenes, 
// the difference between them is not so big. 
// In practice the linear sieve runs about as fast as a typical implementation of the sieve of Eratosthenes.
// https://cp-algorithms.com/algebra/prime-sieve-linear.html

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

const int N = 20000000;
vector<int> lp(N+1);
vector<int> pr;

void Linear_Sieve()
{
    for (int i=2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j=0; j < (int)pr.size() && pr[j] <= lp[i] && i*pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
        }
    }
}

void solve(){
    
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    Linear_Sieve();
    cout << pr.size() << endl;
    ll testcase = 1;
    //cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}