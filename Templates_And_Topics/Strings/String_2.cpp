#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    optimize();
    /*
    /// PRINT LAST ELEMNET
    string s = "abcd";
    cout << s.back() << endl;

    /// DELETE LAST ELEMENT
    s = "abcd";
    s.pop_back();
    cout << s << endl;
    */

    /*
    /// FIND UNIQUE STRING
    vector <string> v;
    v.push_back("muhammad");
    v.push_back("muhammad");
    v.push_back("sharif");
    v.push_back("sharif");
    v.push_back("Naim");
    v.push_back("Naim");

    sort(v.begin(), v.end());

    int uniqueStringNumber = unique(v.begin(), v.end())- v.begin();
    cout << uniqueStringNumber << endl;
    // Print unique strings
    for(int i=0; i<uniqueStringNumber; i++)cout << v[i] << endl;
    */

    /*
    /// CONVERT INTEGER TO STRING
    int a = 123;
    string s = to_string(a);
    cout << s << endl;

    /// REPLACE AN STRING INDEX
    s[0] = '2';
    cout << s << endl;
    */

    /*
    /// CONVERT STRING TO INTEGER
    string s = "345";
    int a = stoi(s);
    ++a;
    cout << a << endl;
    */

    /*
    /// CHECK A CHAR UPPER OR LOWER OR SPACE
    char c = 'A';
    bool ans = isupper(c);
    cout << ans << endl;

    c = 'a';
    ans = isupper(c);
    cout << ans << endl;

    c = 'a';
    ans = islower(c);
    cout << ans << endl;

    c = 'A';
    ans = islower(c);
    cout << ans << endl;

    c = ' ';
    ans = isspace(c);
    cout << ans << endl;
    */

    /*
    /// CONVERT LOWER TO UPPERCASE OR VICE VERSA
    char c = 'a';
    c = toupper(c);
    cout << c << endl;

    c = 'B';
    c = tolower(c);
    cout << c << endl;
    */

    /*
    /// ERASE SUBSTRING FROM A STRING
    // A substring of a string is a continuous part of string
    string s = "shahriaralam";
    s.erase(s.begin()+2 , s.begin()+6);
    cout << s << endl;
    */

    /*
    /// ADD A SUBSTRING FROM ANOTHER STRING TO A STRING
    string s = "AL-Muzahid ";
    string t = "aaa Seyam bbb";
    copy(t.begin()+4, t.begin()+10, back_inserter(s));
    cout << s << endl;
    */

    /*
    /// REMOVE A SPECIFIC CHARACTER FROM A STRING
    string s = "aaabbbbaaaccccddd";
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    cout << s << endl;

    /// CHECK A SUBSTRING CONTAINS IN A STRING OR NOT
    string s = "shahriar";

    if(s.find("ria") != -1)cout << "Sub String Found" << endl;
    else cout << "Sub String Not Found" << endl;
    */

    return 0;
}
