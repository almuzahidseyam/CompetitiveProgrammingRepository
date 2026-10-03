// Next Permutations

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

void solve()
{
	ll n;
	cin >> n;
	vector <ll> v(n);
	for(auto &x : v) cin >> x;
	do{
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}while(next_permutation(v.begin(), v.end()));
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
