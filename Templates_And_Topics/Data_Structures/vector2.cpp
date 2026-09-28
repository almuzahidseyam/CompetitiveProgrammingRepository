#include<bits/stdc++.h>
using namespace std;
int main()
{

    /*
    /// Repetitive number | Unique Function

    vector <int> v = {2,3,5,5,7,7,1};
    sort(v.begin(), v.end()); // Time Complexity - O(nlog(n))
    int sz = unique(v.begin(), v.end()) - v.begin(); // Time Complexity - O(n)

    //for(auto u:v)cout << u << " "; cout << endl;  -> ans vul asbe

    // print unique size
    cout << sz << endl;
    // print unique value
    for(int i=0; i<sz; i++) cout << v[i] << " "; cout << endl;
    */


    /*
    /// Find Max Element Value & Index | Time Complexity -> O(n)
    vector <int> v = {2,3,5,5,7,7,1};
    vector<int>:: iterator it =  max_element(v.begin(), v.end()); // 1st method
    cout << *it << endl;

    // Find Max Element In a define Area
    v = {2,3,5,5,7,7,1};
    vector<int>:: iterator pt =  max_element(v.begin()+1, v.begin()+4);
    cout << *pt << endl;

    // Find Max element index
    v = {2,3,5,5,7,7,1};
    int index = max_element(v.begin(), v.end()) - v.begin();
    cout << "Index of the Max Element value = " << index << endl;

    // Find Max element index in a define area
    v = {2,3,5,5,7,7,1};
    index = max_element(v.begin()+1, v.begin()+4) - v.begin();
    cout << "Index of the Max Element value in a define area = " << index << endl;
    */


    /*
    /// Find Min Element Value & Index | Time Complexity -> O(n)
    vector <int> v = {2,3,5,5,7,7,1};
    vector<int>:: iterator it =  min_element(v.begin(), v.end()); // 1st method
    cout << *it << endl;

    // Find Min Element In a define Area
    v = {2,3,5,5,7,7,1};
    vector<int>:: iterator pt =  min_element(v.begin()+1, v.begin()+4);
    cout << *pt << endl;

    // Find Min element index
    v = {2,3,5,5,7,7,1};
    int index = min_element(v.begin(), v.end()) - v.begin();
    cout << "Index of the Min Element value = " << index << endl;

    // Find Min element index in a define area
    v = {2,3,5,5,7,7,1};
    index = min_element(v.begin()+1, v.begin()+4) - v.begin();
    cout << "Index of the Min Element value in a define area = " << index << endl;
    */


    /*
    /// 2D vector & 3D Vector
    // 2D Array
    int arr[2][3];

    // 2D vector
    vector<vector<int>> v;
    vector<int>a = {2, 3, 4};
    vector<int>b = {2, 3, 4, 6, 7};

    v.push_back(a);
    v.push_back(b);

    // print 2D vector
    for(auto u:v){
        for(auto w: u)cout << w << " "; cout << endl;
    }

    // Array is more than faster than vector...
    */

    /// Day-02 STL - Vector

    return 0;
}
