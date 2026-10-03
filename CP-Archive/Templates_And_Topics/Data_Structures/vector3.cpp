/// Next_permutation
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
    optimize();
    vector <int> v = {1,2,3,4};
    do{
        for(auto u:v)cout << u << " "; cout << endl;
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}
