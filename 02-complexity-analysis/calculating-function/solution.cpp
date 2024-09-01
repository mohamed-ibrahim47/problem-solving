#include <bits/stdc++.h>
using namespace std;
int main() {
    long long res,n;
    cin>>n;
    if(n%2==0)
        res=n/2;
    if(n%2==1)
        res=n/2-n;
    cout<<res<<endl;
    return 0;
}
