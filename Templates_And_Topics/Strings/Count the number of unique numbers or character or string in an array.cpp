// Count the number of unique numbers or character or string in an array

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

void solve()
{
	/*
	// 1st method
    ll n; 
    cin >> n;
    ll array[n];
    for(ll i=0; i<n; i++) 
    	cin>>array[i];
    sort(array, array+n); // Array sorting
    ll distinct = unique(array,array+n)-array;
    cout << "Total unique number = " << distinct << endl;
	*/

	/*
    // 2nd method
    ll n;
    cin >> n;
    vector <ll> v(n);
    for(auto &x : v)cin >> x;
    sort(v.begin(), v.end());
	ll distinct = unique(v.begin(), v.end()) - v.begin();
	cout << "Total unique number = " << distinct << endl;
	*/

	/*
	// 3rd method
	ll n;
	cin >> n;
	set <ll> Set;
	for(ll i = 0; i<n; i++){
		ll x;
		cin >> x;
		Set.insert(x);
	}
	cout << "Total unique number = " << Set.size() << endl;
	*/
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
