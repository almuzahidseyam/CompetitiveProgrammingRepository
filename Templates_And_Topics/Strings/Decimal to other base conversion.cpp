// decimal to other base conversion

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

void solve()
{
    ll number, current_base;
	cin >> number >> current_base;
	string s = "0123456789ABCDEF", result = "";

	while(number>0){
		result += s[number % current_base];
		number /= current_base;
	}
	cout << result << endl;
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
