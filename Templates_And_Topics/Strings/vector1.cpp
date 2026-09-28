#include<bits/stdc++.h>
using namespace std;
int main(){
    
    /*
    int a[4]; // array size static
    vector <int> v; // vector size dynamic
    // push_back
    /// Input
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    // cout << v[3] << endl; // c out
    /// print one element
    cout << v[2] << endl;
    /// replace value with another value
    v[2] = 10;
    cout << v[2] << endl;
    // vector is slower than array, but efficient
    /// vector size
    cout << v.size() << endl;
    /// All element print
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;
    /// clear the vector
    v.clear();
    /// Take input from user
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<v.size(); i++)cout << v[i] << " ";
    cout << endl;
    /// Put some element in pre-time
    // int a[] = {2,3,4,5}; --> array method
    vector<int> vv = {2, 3, 4, 5};
    cout << vv.size() << endl;
    /// print the element
    for(int i=0; i<vv.size(); i++) cout << vv[i] << " ";
    cout << endl;
    /// clear the vector again
    vv.clear();
    cout << vv.size() << endl;
    /// Is the vector empty? if empty print 0, else print 1
    vv = {2, 3};
    cout << vv.empty() << endl;
    */


    /*
    /// Take input from user PART-02
    int n;
    cin>>n;
    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    */


    /*
    /// Take input from user PART-03
    int n;
    cin>>n;
    vector <int> v(n);
    for(auto &input: v){
        cin >> input;
    }
    */


    /*
    /// Vector Resize
    vector <int> v = {2, 3, 4, 5};
    v.resize(10); // baki 6 ta element 0
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;
    */


    /*
    /// vector resize & make it like array!
    vector<int>v;
    v.resize(10);
    int n; // n must be 1-10
    cin>>n;
    for(int i=0; i<n; i++) cin>>v[i];
    cout << v.size() << endl;
    for(int i=0; i<n; i++) cout << v[i] << " ";
    cout << endl;
    */


    /*
    /// Make the vector fully array! or declare the size
    vector <int>v(10); // 1st bracket!!
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;
    // access any element from 0-9 index!
    v[4] = 7;
    cout << v[4] << endl;
    */


    /*
    /// Initially put the value
    vector<int> v(10, 5); // size, value
    // It's like globally declare array // int a[10] -> a[0]=0, a[1]=0
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;
    */


    /*
    /// copy the vector to another vector
    vector <int> v={2,3,4,5};
    vector <int> tmp;
    tmp = v;
    for(int i=0; i<tmp.size(); i++) cout << tmp[i] << " ";
    cout << endl;
    // v vector is not clear after copying
    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << endl;
    */

    /*
    /// Iterator
    vector <int> v={2,3,4,5};
    vector <int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++) // v.begin() -> 0 no index address
    {
        // cout << it << " "; -> error, cause its pointer
        cout << *it << " "; // use * sign must when using iterator
    }
    cout << endl;
    */


    /*
    /// Print the vector using For Each Loop // alternate with iterator & for loop
    vector <int> v={2,3,4,5};
    for(int u: v)cout << u << " "; cout << endl; //1st niyom - integer for vector values are integer
    for(auto u: v)cout << u << " "; cout << endl; // 2nd niyom - auto dore ney
    /// you can update or delete
    for(int u: v){
        u+=2;
        cout << u << " ";
    }
    */


    /*
    /// vector onek kisur hoitye pare! int, double, char, string, set, map, pair, long, float, short, vector er vector
    vector < vector <int> > >v;
    */


    /*
    /// vector pop_back // delete element from back
    vector<int>v = {2,3,4};
    v.pop_back();
    for(auto u: v)cout << u << " "; cout << endl;
    // access the front value of a vector
    cout << v.front() << endl;
    // v.pop_front() nam e kono kotha nai!!!
    for(auto u: v)cout << u << " "; cout << endl;
    */


    /*
    /// vector sorting - non decreasing -> 1 2 2 3 4 5 5
    // non increasing -> 5 5 4 3 2 2 1
    // increasing - all elements will distinct
    // non decreasing - for repetitive distinct
    ///sorting an array
    int a[] = {7, 3, 4, 5}; // An unsorted array
    sort(a, a+4); // sort(a+0, a+4); // a+0 means-> start pointer,
    // a+4 means end pointer
    vector <int> v = {5,3,1,2};
    sort(v.begin(), v.end()); // non decreasing sort
    for(auto u: v)cout << u <<" "; cout <<endl; // print the sorted value
    v = {5,3,1,2,4,7,8,2,1};
    for(auto u: v)cout << u <<" "; cout <<endl; // print the unsorted value
    // sort a defined area
    sort(v.begin()+1, v.begin()+4);
    for(auto u: v)cout << u <<" "; cout <<endl;
    /// complexity of sort function is = O(nlog2(n)) // If n=10^6, then time comp = 17*10^5 = 1.7*10^6 // It works in 1 second
    // So use this sorting in contest time
    /// sorting in non increasing order
    v = {5,3,1,2,4,7,8,2,1};
    sort(v.begin(), v.end(), greater<int>() ); // greater<int>() -> eitak bole comperator
    for(auto u: v)cout << u <<" "; cout <<endl;
    /// another method of sorting in non increasing order
    v = {5,3,1,2,4,7,8,2,1};
    sort(v.rbegin(), v.rend()); // greater<int>() -> eitak bole comperator // eita array te o use kora zabe
    for(auto u: v)cout << u <<" "; cout <<endl;
    int aa[] = {2,3,1};
    sort(aa,aa+3, greater<int>());
    for(auto u: aa)cout << u <<" "; cout <<endl;
    */


    /*
    /// Reverse the vector
    vector<int> v = {5,3,1,4};
    reverse(v.begin(), v.end());
    for(auto u: v)cout << u <<" "; cout <<endl;
    */


    /*
    ///Last element access | v.back()-> Time complexity O(1)
    vector<int> v={2,3,4,5};
    cout << v.back() << endl;
    ///Last element delete | v.pop_back()-> Time complexity O(1)
    v.pop_back(); // remove the last element
    cout << v.back() << endl;  // now last element
    ///Access the first element | v.front -> Time Complexity O(1)
    cout << v.front() << endl;
    ///Another method for Access the first element -> Time Complexity O(1)
    // v.begin() -> begin pointer
    // *v.begin() -> begin pointer value
    cout << *v.begin() << endl;
    /// Vector Erase | v.erase(pointer of deleted index)  -> Time Complexity O(n) -> cause ekta index delete korar por prottekta value 1 ghor shift korbe
    v={2,3,4,5};
    v.erase(v.begin());
    cout << "vector size after 1st element erase" << v.size() << endl;
    for(auto u: v)cout << u <<" "; cout <<endl;
            // যদি কখনো ভেক্টরের সামনে থেকে ১ এর অধিক ইলিমেন্ট ডিলেট করার প্রয়োজন হয়, তাহলে ভেক্টর টাকে রিভার্স করে নিবো, এবং পিছন থেকে ডিলেট করবো, এতে করে কমপ্লেক্সিটি হবে O(n), অন্যথায় কমপ্লেক্সিটি হবে O(n^2)
    v={2,3,4,5};
    reverse(v.begin(), v.end());
    while(!v.empty()){
        cout << v.back() << " ";
        v.pop_back();
    }
    */

    /// 1st class - STL Vector

    return 0;
}
