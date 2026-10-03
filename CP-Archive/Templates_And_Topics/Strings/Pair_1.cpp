#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
    optimize();
    /*
    /// PAIR DECLARE | PART-01
    pair <int, int> p;
    /// PAIR VALUE ACCESS
    p.first = 2;
    p.second = 3;
    */

    /*
    /// PAIR DECLARE | PART-02
    pair <string, int> p;
    /// PAIR VALUE ACCESS
    p.first = "AL-Muzahid";
    p.second = 3;
    cout << p.first << " " << p.second << endl;
    */

    /*
    /// PAIR DECLARE | PART-03
    pair <string, vector<int>> p;
    p.first = 2;
    p.second = {1, 2, 3};
    cout << p.first << endl;
    for(auto it: p.second)cout << it << " "; cout << endl;
    */

    /*
    /// PAIR DECLARE | PART-04 | MAKE_PAIR
    pair <int, int> p;
    p = make_pair(2, 3);
    cout << p.first << " " << p.second << endl;
    p.first++;
    cout << p.first << " " << p.second << endl;
    */

    /*
    /// PAIR DECLARE | PART-05
    pair <int, int> p;
    p = {2,3};
    cout << p.first << " " << p.second << endl;
    */

    /*
    /// PAIR DECLARE | PART-06
    pair <string, vector<int>> p;
    p = {"AL-Muzahid",{1, 2, 3}};
    cout << p.first << " " << p.second.size() << endl;
    */

    /*
    /// PAIR COMPARE
    pair <int, int> p1, p2;
    p1 = {2, 3};
    p2 = {3, 1};
    if(p1<p2) cout << "P1 is small" << endl;
    else if(p1>p2) cout << "P2 is small" << endl;
    else cout << "P1 P2 equal" << endl;

    p1 = {2, 3};
    p2 = {2, 5};
    if(p1<p2) cout << "P1 is small" << endl;
    else if(p1>p2) cout << "P2 is small" << endl;
    else cout << "P1 P2 equal" << endl;

    p1 = {2, 3};
    p2 = {1, 4};
    if(p1<p2) cout << "P1 is small" << endl;
    else if(p1>p2) cout << "P2 is small" << endl;
    else cout << "P1 P2 equal" << endl;

    p1 = {2, 3};
    p2 = {2, 3};
    if(p1<p2) cout << "P1 is small" << endl;
    else if(p1>p2) cout << "P2 is small" << endl;
    else cout << "P1 P2 equal" << endl;
    */

    /*
    /// FIND MINIMUM PAIR & MAXIMUM PAIR
    pair <int, int> p1, p2;
    p1 = {2, 3};
    p2 = {1, 6};

    pair <int, int> p = min(p1,p2);
    cout << p.first << " " << p.second << endl;

    p = max(p1,p2);
    cout << p.first << " " << p.second << endl;
    */

    /*
    /// PAIR SORT | Important Tool For Contest ****
    vector < pair <int, int> > pairSort;
    pairSort.push_back( {6, 5} );
    pairSort.push_back( {2, 3} );
    pairSort.push_back( {4, 5} );
    pairSort.push_back( {6, 1} );
    pairSort.push_back( {1, 9} );

    sort(pairSort.begin(), pairSort.end());
    for(auto it: pairSort)
        cout << it.first << " " << it.second << endl;

    /// Reverse sort
    sort(pairSort.rbegin(), pairSort.rend());
    for(auto it: pairSort)
        cout << it.first << " " << it.second << endl;
    */

    /*
    /// RRAY OF PAIR SORT
    pair < int, int> p[] = { {6, 5}, {2, 3}, {4, 5}, {6, 1}, {1, 9}};
    sort(p, p+5);
    for(int i=0; i<5; i++)
        cout << p[i].first << " " << p[i].second << endl;
    */

    /*
    /// Again Compare
    vector< pair <string, int> >v;
    v.push_back({"Shahriar", 21});
    v.push_back({"AL-Muzahid", 30});
    v.push_back({"AL-Muzahid", 34});
    v.push_back({"Sharif", 45});
    v.push_back({"Sharif", 45});

    sort(v.begin(), v.end());
    for(auto it: v)
        cout << it.first << " " << it.second << endl;
    */

    /*
    /// ARRAY Auto Supported?
    // Answer : yes
    int a[] = {2, 3, 4, 5};
    for(auto it: a)
        cout << it << " ";
    cout << endl;
    */

    /*
    /// UNIQUE
    vector< pair <string, int> >v;
    v.push_back({"Shahriar", 21});
    v.push_back({"AL-Muzahid", 30});
    v.push_back({"AL-Muzahid", 34});
    v.push_back({"Shahriar", 21});
    v.push_back({"Sharif", 45});
    v.push_back({"Sharif", 45});

    sort(v.begin(), v.end());
    int uniqueNumber = unique(v.begin(), v.end()) - v.begin();
    cout << "Number of unique Pair = " << uniqueNumber << endl;
    for(int i=0; i<uniqueNumber; i++)
        cout << v[i].first << " " << v[i].second << endl;
    */

    /*
    /// USER INPUT FOR INPUT
    pair <int, int> p;
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second << endl;
    */
    return 0;
}

