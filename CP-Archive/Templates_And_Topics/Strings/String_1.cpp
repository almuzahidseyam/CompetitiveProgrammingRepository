#include<bits/stdc++.h>
#define OPTIMIZE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); /// Fast Input & Output
#define endl '\n';
///endl-> Interactive Problem -> program flash -> Input>Output, Then again give input based on previous output
using namespace std;
int main()
{
    //OPTIMIZE;
    /*
    /// CHAR ARRAY -> Static, STRING -> Dynamic
    char ch[120];
    */

    /*
    /// STRING CONCATENATION
    // STRING - CHAR CONCATENATION
    string s;
    s = s + 'a';
    s = s + 'b';
    s += 'c';
    cout << s << endl;

    // STRING - STRING CONCATENATION
    s = "AL-MUZAHID";
    s += "SEYAM";
    cout << s << endl;

    // STRING - CHAR - STRING CONCATENATION
    s = "AL";
    s += '-';
    s += "MUZAHID";

    // EXTRA
    s = "AL";
    string s1 = "MUZAHID";
    cout << s+s1 << endl;
    */

    /*
    /// STRING INITIALIZE
    string s = "AL-Muzahid"; //Double Quotation means string, Single Quotation means character
    cout << s << endl;
    s += ' ';
    s += 'a';
    cout << s << endl;

    /// STRING SIZE
    s = "AL-Muzahid";
    cout << s.size() << endl;

    /// STRING INDEX ACCESS
    cout << s[0] << " " << s[1] << " " << s[3] << endl;

    /// CHANGE INDEX VALUE
    s[0] = 'P';
    cout << s << endl;
    */

    /*
    /// STRING CLEAR
    string s = "AL-Muzahid";
    cout << s << endl;
    s.clear();
    cout << s << endl;

    /// STRING ASSIGN
    s = "AL-Muzahid";
    string s1;
    s1 = s;
    cout << s1 << endl;
    */

    /*
    /// STRING EMPTY OR NOT
    string s = "AL-Muzahid";
    // If empty print 1 true else print 0 means false
    cout << s.empty() << endl;
    */

    /*
    /// STRING ITERATOR
    string s = "Muhammad AL-Muzahid";
    string::iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << *it;
    }
    cout << endl;

    // For each loop print
    for(auto it : s)cout << it; cout << endl;

    // Normal loop print
    for(int i=0; i<s.size(); i++)cout << s[i]; cout << endl;
    */

    /*
    /// STRING COMPARISON   || Time Complexity O(N)
    string s1 = "AL-Muzahid", s2 = "Muhammad";
    if(s1==s2)cout << "Equal" << endl;
    else cout << "Not equal" << endl;

    s1 = "AL-Muzahid", s2 = "aL-Muzahid";
    if(s1==s2)cout << "Equal" << endl;
    else cout << "Not equal" << endl;

    s1 = "AL-Muzahid", s2 = "AL-Muzahid";
    if(s1==s2)cout << "Equal" << endl;
    else cout << "Not equal" << endl;
    */

    /*
    /// STRING REVERSE   || Time Complexity O(N)
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << s << endl;
    */

    /*
    /// STRING PALINDROME OR NOT?   || Time Complexity O(N)
    string s = "aabaa";
    string temp = s;
    reverse(temp.begin(), temp.end());
    if(s==temp)cout << "PALINDROME" << endl;
    else cout << "NOT PALINDROME" << endl;

    s = "Aabaa";
    temp = s;
    reverse(temp.begin(), temp.end());
    if(s==temp)cout << "PALINDROME" << endl;
    else cout << "NOT PALINDROME" << endl;
    */

    /*
    /// STRING USER INPUT
    string s;
    cin >> s;
    cout << s << endl;
    */

    /*
    /// INPUT A SENTENCE PART-01
    string s = "AL Muzahid";
    cout << s << endl;
    // But when user give input a sentence/ more words
    string s1;
    cin >> s1;  // give input (AL Muzahid)
    cout << s1 << endl; // output show only AL
    */

    /*
    /// INPUT A SENTENCE PART-02
    string userInput;
    getline(cin, userInput);
    cout << userInput << endl;
    */

    /*
    /// LIMITATIONS OF GETLINE FUCNTION PART-01
    // When given a test case to input some sentence
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        string s;
        getline(cin, s);
        cout << "Case " << tc << " " << s << endl;
    }
    // Mainly compiler thinks when i give input t as 3, then press "ENTER KEY", this is a input, as a result we takes t-1 input
    // So what's the solution?
    */

    /*
    /// LIMITATIONS OF GETLINE FUCNTION PART-02
    /// Best Solution for GETLINE FUCNTION
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        string s;
        char c;
        cin >> c;
        getline(cin, s);
        cout << "Case " << tc << " " << s << endl;
    }
    */

    /*
    /// STRING ASCENDING SORTING   || Time Complexity O(NlogN)
    // Laxicographically
    string s = "deacbA";
    cout << "Main String = " << s << endl;
    sort(s.begin(), s.end());
    cout << s << endl;

    /// STRING DESCENDING SORTING
    s = "deacbA";
    sort(s.rbegin(), s.rend());
    cout << s << endl;

    /// STRING REVERSE
    s = "deacbA";
    reverse(s.begin(), s.end());
    cout << s << endl;

    /// STRING UNIQUE
    // To find unique value, you must to do sort
    s = "deacbAAdeabcca";
    cout << "With duplicate character = " << s << endl;
    sort(s.begin(), s.end());

    int sz = unique(s.begin(), s.end())-s.begin();
    // print how many unique character in this string s
    cout << sz << endl;
    // print unique character in this string s;
    for(int i=0; i<sz; i++)cout << s[i]; cout << endl;
    */

    /*
    /// MAX ELEMENT & MIN ELEMENT
    // VALUE PRINT
    string s = "deacbAAA";
    cout << *max_element(s.begin(), s.end()) << endl;
    cout << *min_element(s.begin(), s.end()) << endl;
    // INDEX PRINT
    cout << max_element(s.begin(), s.end())-s.begin() << endl;
    cout << min_element(s.begin(), s.end())-s.begin() << endl;
    */

    /*
    /// ERASE   || Time Complexity O(N)
    string s = "abxcde";
    // Remove 1st Character     || Time Complexity O(N)
    s.erase(s.begin());
    cout << s << endl;
    // Remove last Character     || Time Complexity O(1)
    s.erase(s.end()-1);
    cout << s << endl;
    // Remove middle Character     || Time Complexity O(N)
    s.erase(s.begin()+2);
    cout << s << endl;
    */

    /*
    /// STRING OF ARRAY SORTING | LAXICOGRAPHICALLY STRING SORTING - PART-01
    string s = "emon", t = "razu";
    if(s < t){cout << s << " is smallest" << endl;}
    else {cout << t << " is smallest" << endl;}

    s = "ee", t = "eee";
    if(s < t){cout << s << " is smallest" << endl;}
    else {cout << t << " is smallest" << endl;}

    /// STRING PREFIX & SUFFIX & SUBSTRING & SUBSEQUENCE & SUBSEGEGMENT
    // Suppose a string s = "abcde";
    // SUB-STRING/ SUB-SEGMENT OF A STRING: continuous part of string: abc, bcd, abcde, bcde
    // SUB-SEQUENCE: Not continuous part: acd, acde, be, bde
    // PREFIX: a, ab, abc, abcd, abcde
    // SUFFIX: e, de, cde, bcde, abcde

    /// PRECISION OF A STRING
    // Lexicographically smallest depends on Ascii value
    // A STRING IS GIVEN s = "Abcd", s1 = "abcd"; ->here A is smaller than a
    */

    /*
    /// STRING OF ARRAY SORTING | LAXICOGRAPHICALLY STRING SORTING - PART-02
    vector <string> v;
    v.push_back("Shahriar");
    v.push_back("Mubarrat");
    v.push_back("emon");
    v.push_back("abcd");
    v.push_back("AL-Muzahid");
    v.push_back("SEYAM");

    sort(v.begin(), v.end()); // Time Complexity O(Nlog2(N)*string_length)
    for(auto it: v)cout << it << endl;
    */

    /*
    /// STRING OF ARRAY SORTING | LAXICOGRAPHICALLY STRING SORTING - PART-03
    vector <string> v;
    v.push_back("Shahriar");
    v.push_back("Mubarrat");
    v.push_back("emon");
    v.push_back("abcd");
    v.push_back("AL-Muzahid");
    v.push_back("SEYAM");

    sort(v.rbegin(), v.rend()); // Time Complexity O(Nlog2(N)*string_length)
    for(auto it: v)cout << it << endl;
    */

    /*
    /// ERASE A SPECIFIC CHARACTER FROM STRING
    string s = "AABBCCDD";
    s.erase(remove(s.begin(), s.end(), 'A'), s.end());
    cout << s << endl;
    */

    /*
    /// FIND INDEX OF A SPECIFIC FIRST CHARACTER FROM STRING
    string s = "ABCDCDE";
    int index = s.find_first_of('C');
    cout << "1st C in this index = " << index << endl;
    */

    /*
    /// STRING REMOVE LAST ELEMENT
    string s = "ABCDEF";
    s.pop_back();
    cout << s << endl;

    /// PRINT ONLY LAST ELEMENT OF A STRING
    s = "ASDFG";
    cout << s.back() << endl; // 1st method
    cout << s[s.size()-1] << endl; // 2nd method

    /// PRINT ONLY FIRST ELEMENT OF A STRING
    s = "asdfg";
    cout << s.front() << endl; // 1st method
    cout << s[0] << endl; // 2nd method

    /// REMOVE FIRST ELEMENT
    s = "asdfghjkl";
    //s.pop_front(); it's not working
    cout << s << endl;

    s.erase(s.begin());
    cout << s << endl;
    */

    return 0;
}
