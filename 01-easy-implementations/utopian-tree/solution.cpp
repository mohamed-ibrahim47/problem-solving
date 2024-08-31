#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    for (int ii = 0; ii < t; ii++) {
        int n,cur = 1;
        cin>>n;
        for (int jj = 1; jj <= n; jj++) {
            if(jj % 2 == 1)
                cur *= 2;
            else cur ++;

        }
        cout<<cur<<endl;
    }

    return 0;
}
