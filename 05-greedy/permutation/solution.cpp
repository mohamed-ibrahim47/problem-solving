#include <bitset>
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin>>n;
    map<int,bool> rep;
    for(int i=0;i<n;i++) {
        int y=0;
        cin>>y;
        rep[y]=true;
    }
    int count=0;
    for(int i=1;i<=n;i++) {
        if(!rep[i]) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}