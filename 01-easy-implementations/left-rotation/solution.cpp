#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int d;
    cin>>n;
    cin>>d;
    int index=0;
    int a[n] ;
    int b[n] ;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if(i-d <0) {
            index=i-d+ n;
        }
        if(i-d>=0) {
            index=i-d;
        }
        b[index]=a[i];
    }
    for (int i = 0; i < n; i++) {
        cout<<b[i] << " ";
    }
    return 0;
}
