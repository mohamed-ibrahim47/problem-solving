#include <iostream>
#include <vector>

using namespace std;

long long mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);

    long long inversions = 0;
    int i = 0, j = 0, k = left;

    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
            inversions += (leftArr.size() - i);
        }
    }

    while (i < leftArr.size()) {
        arr[k++] = leftArr[i++];
    }
    while (j < rightArr.size()) {
        arr[k++] = rightArr[j++];
    }

    return inversions;
}

long long mergeSortAndCount(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;

    int mid = left + (right - left) / 2;
    long long inversions = 0;

    inversions += mergeSortAndCount(arr, left, mid);      
    inversions += mergeSortAndCount(arr, mid + 1, right); 
    inversions += mergeAndCount(arr, left, mid, right);  

    return inversions;
}

long long countInversions(vector<int>& arr) {
    return mergeSortAndCount(arr, 0, arr.size() - 1);
}

int main() {
    int d;
    cin >> d; 

    while (d--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << countInversions(arr) << endl;
    }

    return 0;
}
