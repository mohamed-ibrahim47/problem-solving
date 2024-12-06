#include <iostream>
#include <vector>

using namespace std;

vector<int> countingSort(const vector<int>& arr) {
    const int MAX_VALUE = 100; 
    vector<int> frequency(MAX_VALUE, 0); 

    for (int num : arr) {
        frequency[num]++;
    }

    vector<int> sortedArr;
    for (int i = 0; i < MAX_VALUE; i++) {
        for (int j = 0; j < frequency[i]; j++) {
            sortedArr.push_back(i);
        }
    }

    return sortedArr;
}

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> sortedArr = countingSort(arr);
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
