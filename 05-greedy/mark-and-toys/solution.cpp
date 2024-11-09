#include <bitset>
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {

    long long n,k;
    cin>>n>>k;
    vector<long long> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long sum=0;
    long cnt =0;
    for(int i=0;i<v.size();i++) {
        sum+=v[i];
        if(sum >=k) {
            break;
        }else
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
