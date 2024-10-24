#include <iostream>
#include <vector>
using namespace std;

void removeIt(const vector<int>& A, int x, int ind, vector<int>& result) {
    //
    if (ind == A.size()) {
        return;
    }
    
    if (A[ind] != x) {
        result.push_back(A[ind]);
    }
    removeIt(A, x, ind + 1, result);
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> result;

    removeIt(A, X, 0, result);


    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << " ";  
        }
    }
    
    cout << endl;

    return 0;
}