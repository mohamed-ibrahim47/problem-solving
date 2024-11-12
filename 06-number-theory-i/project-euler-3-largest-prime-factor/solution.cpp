#include <bitset>
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;
vector<pair<long long, int>> factorise(long long x) {
    vector<pair<long long, int>> res;
    for (long long i = 2; i*i <= x; i++) {
        int pw = 0;
        while (x % i == 0) {
            pw++;
            x=x/i;
        }
        if (pw >0) {
            res.emplace_back(i,pw);
        }
    }
    if (x != 1) {
        res.emplace_back(x,1);
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        long long x;
        cin>>x;
        vector<pair<long long, int>> res = factorise(x);
        sort(res.begin(), res.end(), greater<pair<int, int>>());
        cout<<res[0].first<<endl;
    }

    return 0;
}