#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    
    // Input A and B arrays
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    // Create a vector of tuples: (A[i], B[i], i)
    vector<tuple<int, int, int>> tuplearray(N);
    for (int i = 0; i < N; i++) {
        tuplearray[i] = make_tuple(A[i], B[i], i); // {A[i], B[i], i}
    }

    // Sort the tuple array based on the first element of the tuple (A[i])
    sort(tuplearray.begin(), tuplearray.end(), [](const tuple<int, int, int>& t1, const tuple<int, int, int>& t2) {
        return get<0>(t1) < get<0>(t2); // Sort based on A[i]
    });

    // Access the values from the tuple and print them
    for (int i = 0; i < N; i++) {
        int a = get<0>(tuplearray[i]); // A[i]
        int b = get<1>(tuplearray[i]); // B[i]
        int index = get<2>(tuplearray[i]); // original index
        
        cout << "A[" << index << "] = " << a << ", B[" << index << "] = " << b << endl;
    }

    return 0;
}
