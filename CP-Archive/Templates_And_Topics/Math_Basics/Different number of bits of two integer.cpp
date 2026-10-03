// different number of bits of two integer

#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans = (x ^ y);
    ll count = 0;
    while(ans){
        if(ans%2)++count;
        ans /= 2;
    }
    cout << "different number of bits of two integers = " << count << endl; 
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
