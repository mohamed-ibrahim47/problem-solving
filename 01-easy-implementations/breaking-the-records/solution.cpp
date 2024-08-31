#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int max , min , cmax=0 , cmin=0;
    int a[n] ;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if(i==0) {
            max=a[0];
            min=a[0];
        }
        if(max<a[i]) {
            cmax++;
            max=a[i];
        }
        if(min>a[i]) {
            cmin++;
            min=a[i];
        }

    }

    cout<<cmax<<" "<<cmin ;
    return 0;
}
