/// Next_permutation
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
    optimize();
    string s = "abcd";
    do{
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
    return 0;
}
