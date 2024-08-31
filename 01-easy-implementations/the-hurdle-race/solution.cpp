#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,d;

    cin>>n >>d;

    int a[n] ;
    int max =0,res =0;

    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i]>max) {
            max = a[i];
        }

    }
    if(d<max)
        res=max-d;
    cout<<res;
    return 0;
}
