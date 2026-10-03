// https://codeforces.com/problemset/problem/166/A
/*
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
// const ইউজ না করলেও হবে :p
{
    if(p1.first>p2.first)return 1;
    if(p1.first==p2.first) return (p1.second < p2.second);
    return 0;

}
int main()
{
    optimize();
    vector<pair<int,int>>v;
    v = { {4, 143}, {2,120}, {4, 500}, {1,20}};
    sort(v.begin(), v.end(), cmp);
    for(auto u: v)cout <<u.first << " " << u.second << endl;
    return 0;
}
*/


/// Solve Way - 01
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if(p1.first>p2.first)return 1;
    if(p1.first==p2.first) return (p1.second < p2.second);
    return 0;
}
int main()
{
    optimize();
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    for(auto u: v){
        if(u == v[k-1])++ans;
    }
    cout << ans << endl;
    return 0;
}

/// Solve Way - 02
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
    optimize();
    int n, k;
    cin >> n >> k;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;
        v[i].first *= -1;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(auto u: v){
        if(u == v[k-1]) ++ans;
    }
    cout << ans << endl;
    return 0;
}
