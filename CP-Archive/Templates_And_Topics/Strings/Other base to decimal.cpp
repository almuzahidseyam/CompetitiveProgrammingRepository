// Other base to decimal

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

void solve()
{
    string s; // take current number as input
    cin >> s;

    ll Size_of_the_number = s.size();

    ll base; // the number in current base - like base 3, base 8
    cin >> base;

    ll power = 1, result = 0;

    for(ll i = Size_of_the_number - 1; i>=0; i--){
    	if(s[i] >= '0' and s[i] <= '9'){
    		result += ((ll)s[i] - '0') * power;
    	}else{
    		result += ((ll)s[i] - 'A' + 10) * power;
    	}
    	power *= base;
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
