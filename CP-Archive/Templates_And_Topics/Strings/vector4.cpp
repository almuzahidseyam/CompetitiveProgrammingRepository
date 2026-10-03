/// https://lightoj.com/problem/discovering-permutations
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
    optimize();
    int caseno = 1;
    int testcase;
    cin >> testcase;
    while(testcase--){
        int n, k;
        cin >> n >> k;
        vector <char> v;
        for(int i=0; i<n; i++){
            v.push_back(char(i+65));
        }
        //for(auto u: v)cout << u << " "; cout << endl;
        cout << "Case " << caseno++ << ":" << endl;
        int count = 0;
        do{
            if(count == k)break;
            ++count;
            for(auto it : v){
                cout << it;
            }
            cout << endl;
        }while(next_permutation(v.begin(), v.end()));
    }
//    string s = "abcd";
//    do{
//        cout << s << endl;
//    } while(next_permutation(s.begin(), s.end()));
    return 0;
}

