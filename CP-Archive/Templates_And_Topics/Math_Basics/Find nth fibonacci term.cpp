// Find nth fibonacci term
// Fibonaccis number are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181...
#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long ll;

void solve()
{
    // binet's formula:	Fn = (1/sqrt(5))* ( ((1+sqrt(d))/2)^(n) - (1-sqrt(d))/2)^(n) )
    
    ll n;
    cin >> n;

    double five = sqrt(5);
    double aa = (1+five)/2.0;
    double bb = (1-five)/2.0;
    double ans = pow(aa,n);
    ans -= pow(bb,n);
    ans /= five;

    cout << ans << endl;
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
