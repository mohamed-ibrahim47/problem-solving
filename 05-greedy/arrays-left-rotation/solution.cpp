#include <bitset>
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {

    int n,d;
    cin>>n>>d;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    d %=n;
    for (int i = 0; i < d; i++) {

        int first = v[0];
        for (int j = 0; j < n - 1; j++) {
            v[j] = v[j + 1];
        }
        v[n - 1] = first;
    }
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}