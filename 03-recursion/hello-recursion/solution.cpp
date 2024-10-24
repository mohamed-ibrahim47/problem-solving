#include <iostream>
using namespace std;

int recSum(int arr[], int n) {
    //
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + recSum(arr, n - 1);
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int result = recSum(arr, n);

        cout << "Case " << i << ": " << result << endl;
    }

    return 0;
}