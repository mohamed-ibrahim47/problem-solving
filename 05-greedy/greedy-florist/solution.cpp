#include <bitset>
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {

    int n,k;
    cin>>n>>k;
    vector<long long> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end() , greater<long long>());
    long long sum=0 , cnt =1;
    for(int i=0;i<n;i++) {
        if(i%k==0 && i!=0) {
            cnt++;
        }
        sum+=v[i] *cnt;
    }
    cout<<sum<<endl;
    return 0;
}