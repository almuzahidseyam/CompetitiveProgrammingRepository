/*                                          
                                                I Give My Best
                                        Allah will take care of the rest.
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define PI                              acos(-1.0)
#define Precision(x)                    cout << fixed << setprecision(x)
#define Debug(x)                        cout << #x << " = "; cout << x << '\n'
#define Decision(x)                     cout << (x ? "YES" : "NO") << '\n'
#define Fsrt(x)                         sort(x.begin(), x.end())
#define Rsrt(x)                         sort(x.rbegin(), x.rend())
#define Reverse(x)                      reverse(x.begin(), x.end())

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

template<typename typC, typename typD> istream &operator>>(istream &cin, pair<typC, typD> &a){
    return cin >> a.first >> a.second;
}
template<typename typC, typename typD> ostream &operator<<(ostream &cout, const pair<typC, typD> &a){
    return cout<< a.first <<' '<< a.second;
}
template<typename typC> istream &operator>>(istream &cin, vector<typC> &a){
    for (auto &x: a) cin >> x;
    return cin;
}
template<typename typC, typename typD> ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a){
    for(auto &x:a) cout << x <<'\n';
    return cout;
}
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a){
    int n = a.size();
    if (!n) return cout;
    cout << a[0];
    for (int ii = 1; ii < n; ii++) cout<<' '<<a[ii];
    return cout;
}
template<typename typC, typename typD> ostream &operator<<(ostream &cout, const unordered_map<typC, typD> &m){
    for(auto &[x , y] : m) cout << x << ' ' << y << '\n';
    return cout;
}
template<typename typC, typename typD> ostream &operator<<(ostream &cout, const map<typC, typD> &m){
    for(auto &[x , y] : m) cout << x << ' ' << y << '\n';
    return cout;
}

struct compare_function { 
    bool operator() (const pair<int, int> &a, const pair<int, int> &b) const { 
        int lena = a.second - a.first + 1; 
        int lenb = b.second - b.first + 1; 
        if (lena == lenb) return a.first < b.first; 
        return lena > lenb; 
    } 
};

bool sort_asc(const pair<int, int> &a, const pair<int, int> &b){
    return (a.second < b.second);
}
bool sort_des(const pair<int, int> &a, const pair<int, int> &b){
    return (a.second > b.second);
}
bool check_prime(ll n) {
    if (n == 2)
        return true;
    if (n < 2 or not(n & 1))
        return false;
    for (ll ii = 3; ii * ii <= n; ii += 2) {
        if (n % ii == 0)
            return false;
    }
    return true;
}
bool check_even(ll n){
    return !(n & 1); // also use these: (n & 1 ^ 1), (n % 2 == 0)
}
bool check_odd(ll n){
    return (n & 1);
}
bool check_power_of_two(ll n){
    return !(n & (n - 1));
}
bool check_perfect_square(ll n){
    if (n < 0)
        return false; // negative numbers are not perfect squares
    ll root = sqrt(n);
    return (root * root == n);
}
bool check_fibonacci(int n) {
    return check_perfect_square(5*n*n + 4) or check_perfect_square(5*n*n - 4);
}
bool check_sorted(vector <ll>&Name){
    if(is_sorted(Name.begin(), Name.end()))
        return true;
    return false;
}
bool check_parity(ll n){
    return __builtin_parityll(n); // returns true(1) if the number has odd parity else it returns false(0) for even parity
}
bool check_substring(string child, string mother){
    if(mother.find(child) != string::npos)
        return true;
    return false; // tc: O(N)
}
bool is_subsequence(string& s1, string& s2){
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    /*If i reaches end of s1,that mean we found all
    characters of s1 in s2,
    so s1 is subsequence of s2, else not*/
    return i == n;
}

string left_shift(string s) {
    return s.substr(1, s.size() - 1) + s.substr(0, 1);
}
string right_shift(string s) {
    return s.back() + s.substr(0, s.size() - 1);
}
string generate_string(ll Length, char x){
    return string(Length, x);
}
string int_to_string(ll n){
    return to_string(n);
}
string convert_lowercase(string Name){
    transform(Name.begin(), Name.end(), Name.begin(), ::tolower);
    return Name;
}
string convert_uppercase(string Name){
    transform(Name.begin(), Name.end(), Name.begin(), ::toupper);
    return Name;
}
string substring(string s, ll starting_index, ll Length){
    return s.substr(starting_index, starting_index + Length);
}
string binary_representation_of_given_number(ll n){
    return bitset<64>(n).to_string().substr(64 - log2(n));
}

const int  N                            = (int) 2e6+3;
const ll   MOD1e9                       = (ll) 1e9+7;
const ll   MOD998                       = (ll) (119 << 23) + 1; // 998244353

ll GCD(ll a, ll b){
    return __gcd(a, b);
}
ll LCM(ll a, ll b){
    return a * b / GCD(a, b);
}
ll nCr(ll n, ll r){
    ll Ans = 1, k = 1;
    if (r > n - r)
        r = n - r;
    if (r != 0) {
        while (r){
            Ans *= n; k *= r;
            ll m = __gcd(Ans, k);
            Ans /= m; k /= m; n--; r--;
        }
    }
    else
        Ans = 1;
    return Ans;
}
ll Factorial(ll n, ll Mod) { // calculates(n! % p)
    vector<ll> Fact(Mod);
    Fact[0] = 1;
    for (ll i = 1; i < Mod; i++)
        Fact[i] = Fact[i-1] * i % Mod;
    ll Ans = 1;
    while (n > 1) {
        if ((n/Mod) & 1)
            Ans = Mod - Ans;
        Ans = Ans * Fact[n%Mod] % Mod;
        n /= Mod;
    }
    return Ans;
}
ll Make_power_of_two(ll n){
    return (1LL << n);
}
ll Power_Optimized(ll Base, ll Exponent){
    //Use case: computing exponentiation with a small exponent and without a modulus
    ll Ans = 1;
    while (Exponent > 0){
        ll Last_bit = (Exponent & 1LL);
        if (Last_bit)
            Ans = Ans * Base;
        Base *= Base;
        Exponent >>= 1;
    }
    return Ans;
}
ll Modular_Exponentiation(ll Base, ll Exponent, ll Mod){
    // Use case: computing exponentiation with a large modulus
    ll Result = 1LL;
    Base = Base % Mod;
    if (Base == 0)
        return 0;
    while (Exponent > 0){
        if (Exponent & 1)
            Result = (Result * Base) % Mod;
        Exponent = Exponent >> 1;
        Base = (Base * Base) % Mod;
    }
    return Result;
}
ll Modular_Addition(ll x, ll y, ll Mod){
    x = x % Mod;
    y = y % Mod;
    return (((x + y) % Mod) + Mod) % Mod;
}
ll Modular_Subtraction(ll x, ll y, ll Mod){
    x = x % Mod;
    y = y % Mod;
    return (((x - y) % Mod) + Mod) % Mod;
}
ll Modular_Multiplication(ll x, ll y, ll Mod){
    x = x % Mod;
    y = y % Mod;
    return (((x * y) % Mod) + Mod) % Mod;
}
ll Modular_Inverse(ll x, ll y){
    return Modular_Exponentiation(x, y - 2LL, y);
}
ll Leading_Zeros(ll n){
    return __builtin_clzll(n); // count the leading zeros of a number
}
ll Trailing_Zeros(ll n){
    return __builtin_ctzll(n); // count the trailing zeros of a number
}
ll Number_of_Set_Bits(ll n){
    return __builtin_popcountll(n); // Count the number of one’s(set bits) in an integer
}
ll clearKthBit(ll n, ll k){
    return (n & (~(1ll << k)));
}
ll setKthBit(ll n, ll k){
    return ((1ll << k) | n);
}
ll checkKthBit(ll n, ll k){
    return (n & (1ll << k)); 
}
ll String_To_Int(string s){
    return stoi(s);
}
ll All_Possible_Substring_Sum(string s){
    ll n = (ll)s.size();
    ll SumofDigit[n];
    SumofDigit[0] = s[0] - '0';
    ll Sum = SumofDigit[0];
    for(ll i = 1; i < n; i++){
        ll Current_Value = s[0] - '0';
        SumofDigit[i] = (i + 1) * Current_Value + 10 * SumofDigit[i - 1];
        Sum += SumofDigit[i];
    }
    return Sum; // Time Complexity: O(n)
}
ll Maximum_Subarray_sum(vector <ll>&Name){ // Kadane's algo
    ll n = Name.size();
    ll Ans = Name[0], Sum = Name[0];
    for(ll ii = 1; ii < n; ii++){
        Sum = max(Sum + Name[ii], Name[ii]);
        Ans = max(Ans, Sum);
    }
    return Ans;
}
ll Maximum_Element(vector <ll> &Name){
    return *max_element(Name.begin(), Name.end());
}
ll Minimum_Element(vector <ll> &Name){
    return *min_element(Name.begin(), Name.end());
}
ll Maximum_Element_Index(vector <ll> &Name){
    return max_element(Name.begin(), Name.end()) - Name.begin();
}
ll Minimum_Element_Index(vector <ll> &Name){
    return min_element(Name.begin(), Name.end()) - Name.begin();
}

// radix sort

template<const bool negative = true, const int BITS = 9, typename _RandomAccessIterator>
inline void radix_sort(_RandomAccessIterator _first, _RandomAccessIterator _last, const bool reverse = false)
{
    typedef typename iterator_traits<_RandomAccessIterator>::value_type value_type;
    if(negative)
    {
        if(!reverse) {
            _RandomAccessIterator _middle = partition(_first, _last, [](value_type a) -> bool {return a<0;});   
            for(auto it = _first; it != _middle; it++)*it *= -1;
            radix_sort<false>(_first, _middle, true);
            for(auto it = _first; it != _middle; it++)*it *= -1;
            radix_sort<false>(_middle, _last);
        } else {
            _RandomAccessIterator _middle = partition(_first, _last, [](value_type a) -> bool {return a>=0;});  
            radix_sort<false>(_first, _middle, true);
            for(auto it = _middle; it != _last; it++)*it *= -1;
            radix_sort<false>(_middle, _last);
            for(auto it = _middle; it != _last; it++)*it *= -1;
        }
        return;
    }
    constexpr int PART = (1<<BITS);
    constexpr int FULL = (1<<BITS)-1;
    int shift = 0;
    auto MAX = *max_element(_first, _last);
    vector<value_type> P[PART];
    while(log2(MAX) >= shift)
    {
        for(auto it = _first; it != _last; it++)P[(((*it)>>shift)&FULL)^(reverse?FULL:0)].push_back(*it);
        auto it = _first;
        for(int i = 0; i < PART; i++)
        {
            for(auto u: P[i]) *it++ = u;
            P[i].clear();
        }
        shift += BITS;
    }
}
// radix sort ends 


// Yarin Sieve Starts
// This is the famous "Yarin Sieve", for use when memory is tight
#define MAXSIEVE 100000001
#define MAXSIEVEHALF (MAXSIEVE >> 1)
#define MAXSQRT 5000
#define isprime(n) ((is_prime[n >> 4] & (1 << ((n >> 1) & 7))) && ((n & 1) || (n == 2)))

char is_prime[MAXSIEVE / (1 << 4) + 2];

void Yarin() {
    auto start = chrono::high_resolution_clock::now();
    memset(is_prime, (1 << (1 << 3)) - 1, sizeof(is_prime));
    is_prime[0] = 0xFE;
    for(int i = 1; i < MAXSQRT; i++) {
        if(is_prime[i >> 3] & (1 << (i & 7))) {
            for(int j = 2 * i * (i + 1); j < MAXSIEVEHALF; j += (i << 1) + 1) {
                is_prime[j >> 3] &= ~(1 << (j & 7));
            }
        }
    }
}
vector <int> Yarin_primes;
void nPrime(){
    for(int i = 0; i < MAXSIEVE; i++) {
        if(isprime(i)){
            //cout << i << '\n';
            Yarin_primes.push_back(i);
        }
    }
}
// Yarin Sieve Ends

/*
// Normal Sieve of Eratosthenes Starts

const int  sieve_size                   = (int) 1e7 + 7;
vector <int> save_primes;
vector <bool> is_prime(sieve_size, true);
void Eratosthenes_Sieve(){
    is_prime[0] = is_prime[1] = false;
    is_prime[2] = true;
    for (int i = 3; i * i <= sieve_size; i+=2) {
        if (is_prime[i]) {
            for (int j = i * i; j <= sieve_size; j += i + i)
                is_prime[j] = false;
        }
    }
    save_primes.push_back(2);
    for(int i = 3; i <= sieve_size; i+=2){
        if(is_prime[i])
            save_primes.push_back(i);
    }
}
// Normal Sieve of Eratosthenes Ends

vector <ll> Prime_Factorization(ll n){
    // Use case: multiple query and n <= 1e7
    vector <ll> Prime_Factors;
    for(int ii = 0; save_primes[ii] * save_primes[ii] <= n; ii++){
        if(n % save_primes[ii] == 0){
            Prime_Factors.push_back(save_primes[ii]);
            while(n % save_primes[ii] == 0)
                n /= save_primes[ii];
        }
    }
    if(n > 1)
        Prime_Factors.push_back(n);
    return Prime_Factors; // Call this: vector <ll> PF = Prime_Factorization(30);
}
*/
vector <ll> Factorization(ll n){
    // Use case: For single query and n <= 1e18
    vector<ll>Factors;
    for(int ii = 2; ii * ii <= n; ii++){
        if(n%ii == 0)
            Factors.push_back(ii);
        while(n%ii==0)
            n/=ii;
    }
    if(n > 1)
        Factors.push_back(n);
    return Factors;
}
vector <ll> All_Divisors(ll n){
    vector <ll> Divisors;
    for(int ii = 1; ii * ii <= n; ii++){
        if(n % ii == 0){
            Divisors.push_back(ii);
            if(ii != n/ii)
                Divisors.push_back(n / ii);
        }
    }
    return Divisors; // Unsorted
}
/*
vector <vector <ll>> Divisors(N); // Divisors for all numbers from 1 to N
void All_Divisors_In_Range(){ // NLogN, slower = push_back
    for(int ii = 1; ii < N; ii++){
        for(int jj = ii; jj < N; jj += ii)
            Divisors[jj].push_back(ii);
    }
}
*/
vector <int> Divisors(N, 0); // Only Divisors count' for all numbers from 1 to N
void All_Divisors_In_Range(){ // NLogN, faster = no push_back
    for(int ii = 1; ii < N; ii++){
        for(int jj = ii; jj < N; jj += ii)
            Divisors[jj]++;
    }
}
vector<ll> Longest_increasing_subsequece_path(vector<ll>& Name) {
    ll n = Name.size();
    vector<ll> sub, subIndex;
    vector<ll> path(n, -1);
    for (ll ii = 0; ii < n; ++ii) {
        if (sub.empty() || sub[sub.size() - 1] < Name[ii]) {
            path[ii] = sub.empty() ? -1 : subIndex[sub.size() - 1];
            sub.push_back(Name[ii]);
            subIndex.push_back(ii);
        }else {
            ll idx = lower_bound(sub.begin(), sub.end(), Name[ii]) - sub.begin();
            path[ii] = idx == 0 ? -1 : subIndex[idx - 1];
            sub[idx] = Name[ii];
            subIndex[idx] = ii;
        }
    }
    vector<ll> ans;
    ll t = subIndex[subIndex.size() - 1];
    while (t != -1) {
        ans.push_back(Name[t]);
        t = path[t];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int LCS_of_two_strings(const string& X, const string& Y) {
    int m = X.length();
    int n = Y.length();

    // Create a table to store the lengths of LCS for all subproblems
    vector<vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    // Fill the dp table in a bottom-up manner
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // The length of the LCS is the maximum value in the dp table
    int lcs_length = dp[m][n];
    return lcs_length;
}
ll longestKSubstr(string s, ll k){
    ll left = 0;
    ll right = 0;
    ll ans = -1;
    unordered_map<char, ll> mp;
    while (right < s.size()) {
        mp[s[right]]++;
        while (mp.size() > k) {
            mp[s[left]]--;
            if (mp[s[left]] == 0)
                mp.erase(s[left]);
            left++;
        }
        if (mp.size() == k) {
            ans = max(ans, right - left + 1);
        }
        right++;
    }
    return ans;
}

// KMP - string matching starts
vector<int> constructTempArray(string pattern) {
    vector<int> lps(pattern.size());
    int index = 0;
    for (int i = 1; i < (int) pattern.size(); ) {
        if (pattern[i] == pattern[index]) lps[i] = index + 1, ++index, ++i;
        else {
            if (index != 0) index = lps[index - 1];
            else lps[i] = index, ++i;
        }
    }
    return lps;
}

bool KMPMultipleTimes (string text, string pattern) {
    vector<int> lps = constructTempArray(pattern);
    int j = 0, i = 0;

    while (i < (int) text.size()) {
        if (text[i] == pattern[j]) ++i, ++j;
        else {
            if (j != 0) j = lps[j - 1];
            else ++i;
        }

        if (j == (int) pattern.size()) {
            return true;
        }
    }
    return false;
}
// KMP - string matching ends

void String_Permutations(string s){
    sort(s.begin(), s.end());
    do{
        cout << s << '\n';
    }while (next_permutation(s.begin(), s.end()));
}
void Print_All_Substrings(string s){
    int n = s.size();
    for(int i = 0; i < n; i++){
        char temp[n - i + 1];
        int tempindex = 0;
        for (int j = i; j < n; j++){
            temp[tempindex++] = s[j];
            temp[tempindex] = '\0';
            cout << temp << '\n';
        }
    }
}
void Date_and_Time(){
    #ifndef ONLINE_JUDGE
    cout<<"Date: "<<__DATE__<< '\n';
    cout<<"Time: "<<__TIME__<< '\n';
    #endif
}
void Execution_Time(){
    cerr << "\nExecution Time: " << 1.0 * clock() / CLOCKS_PER_SEC << " s." << '\n';
}
void FileIO(){
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
void Optimization(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0);
}

/*
    //Debug Tool
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 */

void Approach(){
    
}

int main(){
    Optimization();
    /*Eratosthenes_Sieve();*/
    /*Yarin();
    nPrime();*/
    int Cases = 1;
    // cin >> Cases;
    for(int Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
        Approach();
    }
    // Execution_Time();
    return 0;
}

/// EXTRA SECTION ///

// Fibonacci in LogN starts //
vector<vector<ll>> identityMatrix({
    {1, 0}, 
    {0, 1}
});
vector<vector<ll>> result({
    {0, 0},
    {0, 0}
});
void multiply(vector<vector<ll>> a, vector<vector<ll>> b){
    for(auto &i : result){
        for(auto &j : i){
            j = 0;
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                result[i][k] += a[i][j] * b[j][k];
                result[i][k] %= MOD;
            }
        }
    }
}
void matrixExpo(vector<vector<ll>> matrix, ll n){
    if(n == 0){
        result = identityMatrix;
        return;
    }
    matrixExpo(matrix, n / 2);
    multiply(result, result);
    if(n & 1){
        multiply(result, matrix);
    }
}
ll nthFibonacciNumber(ll n){ // n <= 1e18, F0 = 0, F1 = 1, F2 = 1
    if(n <= 1)
        return n;
    vector<vector<ll>> baseMatrix({
        {1, 1},
        {1, 0}
    });
    multiply(baseMatrix, identityMatrix);
    matrixExpo(baseMatrix, n - 1);
    return result[0][0];
}
// Fibonacci in LogN ends //


// Distinct in Range Queries starts//
bool compare(pair<pair<int, int>, int>& a, pair<pair<int, int>, int>& b){
    return a.ff.ss < b.ff.ss;
}
void update(int index, vector<int>& bit, int value){
    for(; index < sz(bit); index += (index & (-index))){
        bit[index] += value;
    }
}
int query(int index, vector<int>& bit){
    int sum = 0;
    for(; index > 0; index -= (index & (-index))){
        sum += bit[index];
    }
    return sum;
}
vector<int> distinctQueries(int n, int q, vector<int>& arr, vector<pair<int, int>>& queries){
    map<int, int> compression;
    int prev = 0;
    for(auto &i : arr){
        if(compression.find(i) == compression.end()){
            compression[i] = prev;
            prev++;
        }
        i = compression[i];
    }
    vector<int> lastIndex(sz(compression), -1);
    vector<pair<pair<int, int>, int>> tempQueries(q);
    for(int i = 0; i < q; i++){
        tempQueries[i].ff.ff = queries[i].ff + 1;
        tempQueries[i].ff.ss = queries[i].ss + 1;
        tempQueries[i].ss = i;
    }
    vector<int> ans(q);
    sort(all(tempQueries), compare);
    int num = 0;
    vector<int> bit(n + 1);
    for(int i = 0; i < n; i++){
        if(lastIndex[arr[i]] != -1){
            update(lastIndex[arr[i]] + 1, bit, -1);
        }
        lastIndex[arr[i]] = i;
        update(i + 1, bit, 1);
        while(num < q && tempQueries[num].ff.ss == i + 1){
            int index = tempQueries[num].ss;
            ans[index] = query(i + 1, bit) - query(tempQueries[num].ff.ff - 1, bit);
            num++;
        }
    }
    return ans;
}
// Distinct in Range Queries ends//


// Dijkstra starts // 
// O(VlogV + ElogV)
// Single Source Shortest Path

void Dijkstra(int s, int n, vector<ll> &dist, vector<int> &parent, vector<pair<int, ll>> *adj) {
    dist.assign(n, INF);
    parent.assign(n, -1);
    dist[s] = 0;
    priority_queue <pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, s});
    while (!q.empty()) {
        pair<ll, int> here = q.top();
        q.pop();
        int v = here.ss;
        ll d_v = here.ff;
        if (d_v != dist[v])
            continue;
        for (auto edge : adj[v]) {
            if (dist[v] + edge.ss < dist[edge.ff]) {
                dist[edge.ff] = dist[v] + edge.ss;
                parent[edge.ff] = v;
                q.push({dist[edge.ff], edge.ff});
            }
        }
    }
}
// Dijkstra ends // 


// Number of Connected Component in a graph starts// 
const ll mx = 1e5 + 5;
bool vis[mx];
vector <ll> adj[mx];

void dfs(ll u){
    vis[u] = 1;
    for(auto v : adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

void Solve(){
    
    ll n, m;
    cin >> n >> m;
    for(ll i = 1; i <= m; i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll Count = 0;
    for(ll i = 1; i <= n; i++){
        if(vis[i] == 0){
            dfs(i);
            Count++;
        }
    }
    cout << Count << endl;
    
}

// Number of Connected Component in a graph ends// 

// DFS starts //
const ll mx = 1e5 + 5;
vector <ll> adj[mx];
void dfs(ll u){
    vis[u] = 1;
    for(auto v : adj[u]){
        if(vis[v] == 0){
            dfs(v);
        }
    }
}

void Solve(){
    ll n, m;
    cin >> n >> m;

    for(ll i = 1; i <= m; i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);  // 1 : 2
        adj[v].push_back(u); // 2 : 1
    }

    for(ll i = 1; i <= n; i++){
        cout << "Adjacent list of " << i << " :";
        for(auto x : adj[i])
            cout << x << ' ';
        cout << endl;
    }
}
// DFS ENDS //

/// Simple Seg tree Starts full code/// 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll N = (ll)2e5 + 1;
 
ll arr[N];
ll tree[4*N];
ll lazy[4*N];
 
 
/**
 * Build and init tree
 */
void build_tree(ll node, ll a, ll b) {
    if(a > b) return; // Out of range
 
    if(a == b) { // Leaf node
            tree[node] = arr[a]; // Init value
        return;
    }
 
    build_tree(node*2, a, (a+b)/2); // Init left child
    build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
 
    tree[node] = (tree[node*2] + tree[node*2+1]); // Init root value
}
 
 
/**
 * update tree
 */
void update_tree(ll node, ll a, ll b, ll i, ll j, ll value) {
 
    if(lazy[node] != 0) { // This node needs to be updated
        tree[node] += lazy[node]; // Update it
 
        if(a != b) {
            lazy[node*2] += lazy[node]; // Mark child as lazy
                lazy[node*2+1] += lazy[node]; // Mark child as lazy
        }
 
        lazy[node] = 0; // Reset it
    }
 
    if(a > b || a > j || b < i) // Current segment is not within range [i, j]
        return;
 
    if(a >= i && b <= j) { // Segment is fully within range
            tree[node] += value;
 
        if(a != b) { // Not leaf node
            lazy[node*2] += value;
            lazy[node*2+1] += value;
        }
        return;
    }
 
    update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
    update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child
 
    tree[node] = (tree[node*2] +  tree[node*2+1]); // Updating root with max value
}
 
/**
 * query in tree
 */
ll query_tree(ll node, ll a, ll b, ll i, ll j) {
 
    if(a > b || a > j || b < i) return 0; // Out of range
 
    if(lazy[node] != 0) { // This node needs to be updated
        tree[node] += lazy[node] * ( b - a + 1); // Update it
 
        if(a != b) {
            lazy[node*2] += lazy[node]; // Mark child as lazy
            lazy[node*2+1] += lazy[node]; // Mark child as lazy
        }
 
        lazy[node] = 0; // Reset it
    }
 
    if(a >= i && b <= j) // Current segment is totally within range [i, j]
        return tree[node];
 
    ll q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
    ll q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child
 
    ll res = (q1 + q2); // Return final result
 
    return res;
}
 
int main() {
 
 
    memset(lazy, 0, sizeof lazy);
 
    ll n, q;
    cin >> n >> q;
 
    for(ll i = 1; i <= n; i++)
        cin >> arr[i];
 
    build_tree(1, 1, n);
 
    while(q--){
        ll l, r, x, t;
        cin >> t;
 
        if(t == 1){
            cin >> l >> r >> x;
 
            update_tree(1, 1, n, l, r, x);
        }
 
        else{
            cin >> l >> r;
            cout << query_tree(1, 1, n, l, r) << endl;
        }
    }
 
}
//// Simple Seg tree ends ////


/// Seg tree with Lazy ///
#include <bits/stdc++.h>
#define Optimization()                  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0);

using namespace std;
typedef long long ll;

const ll MXN = 2e5 + 5;
ll ar[MXN];
ll st[4*MXN];
ll lazy[4*MXN];
 
void build(ll si, ll ss, ll se){
    if(ss == se){
        st[si] = ar[ss]; 
        return;
    }
 
    ll mid = (ss+se) / 2;
    build(2 * si, ss, mid);
    build(2 * si + 1, mid+1, se);
 
    st[si] = (st[2 * si] + st[2 * si + 1]); // May need to change
}
 
ll query(ll si, ll ss, ll se, ll qs, ll qe){
    if(lazy[si] != 0){
        ll dx = lazy[si];
        lazy[si] = 0;
        st[si] += dx * (se - ss + 1); // May need to change
 
        if(ss != se){
            lazy[2 * si] += dx;
            lazy[2 * si + 1] += dx;
        }
    }

    if(ss > qe or se < qs)
        return 0; // May need to change
 
    if(ss >= qs and se <= qe)
        return st[si];
 
    ll mid = (ss + se) / 2;
    return (query(2 * si, ss, mid, qs, qe) + query(2 * si + 1, mid + 1, se, qs, qe)); /// may need to changes...
}
 
void update(ll si, ll ss, ll se, ll qs, ll qe, ll val){
    if(lazy[si] != 0){
        int dx = lazy[si];
        lazy[si] = 0;
        st[si] += dx * (se - ss + 1); // May need to change
 
        if(ss != se){
            lazy[2 * si] += dx;
            lazy[2 * si + 1] += dx;
        }
    }
    
    if(ss > qe or se < qs)
        return;

    if(ss >= qs and se <= qe){
        ll dx = (se - ss + 1) * val;
        st[si] += dx;
        if(ss != se){
            lazy[2 * si] += val;
            lazy[2 * si + 1] += val;
        }
        return;
    }
 
    ll mid = (ss + se) / 2;
    update(2 * si, ss, mid, qs, qe, val);
    update(2 * si + 1, mid + 1, se, qs, qe, val);
 
    st[si] = st[2 * si] + st[2 * si + 1]; // May need to change
}

void Approach(){
    ll n, q;
    cin >> n;

    for(ll ii = 1; ii <= n; ii++){
        cin >> ar[ii];
    }

    build(1, 1, n);

    cin >> q;
    while(q--){
        ll t, x, y;
        cin >> t >> x >> y;
        if(t == 1){
            cout << query(1, 1, n, x, y) << '\n';
        }
        else{
            update(1, 1, n, x, x, y);
        }
    }
}

int main(){
    Optimization();
    ll Cases = 1;
    // cin >> Cases;
    for(ll Test = 1; Test <= Cases; Test++){
        // cout << "Case " << Test << ": ";
        Approach();
    }
    return 0;
}
/// Seg tree with Lazy Ends ///

// Find the maximum value one can obtain with a total weight limit
    int n, w; cin >> n >> w;
    int weight[n], val[n];
    for (int i = 0; i < n; i++) cin >> weight[i];
    for (int i = 0; i < n; i++) cin >> val[i];

    int dp[w + 1] = {};
    for (int i = 0; i < n; i++)
        for (int j = w; j >= weight[i]; j--)
            dp[j] = max(dp[j], dp[j - weight[i]] + val[i]);
    cout << dp[w] << "\n";

// 1) Problem link: https://cses.fi/problemset/task/1635
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= x; i++) 
        for (int j : arr) 
            if (i - j >= 0) 
                dp[i] = (dp[i] + dp[i - j]) % MOD; 
    cout << dp[x] << "\n";

// 2) Problem link: https://cses.fi/problemset/task/1636
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for (int j : arr) 
        for (int i = 1; i <= x; i++) 
            if (i - j >= 0) 
                dp[i] = (dp[i] + dp[i - j]) % MOD; 
    cout << dp[x] << "\n";

// 3) Problem link: https://cses.fi/problemset/task/1634
    vector<int> dp(x + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= x; i++) 
        for (int j : arr) 
            if (i - j >= 0) 
                dp[i] = min(dp[i], dp[i - j] + 1);
    cout << (dp[x] == INF ? -1 : dp[x]) << "\n";
