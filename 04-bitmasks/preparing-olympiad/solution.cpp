#include <iostream>
#include <vector>
using namespace std;
bool check_set(int mask , int bit) {
    return mask & (1<<bit );
}
int main() {
    long long l,r,x;
    int n ;
    cin>>n>>l>>r>>x;
    vector<long long> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    long long ans=0;
    for(int mask=0;mask<(1<<n);mask++) {
        long long sum=0,mx=-1,mn=1e7;
        for(int i=0;i<n;i++) {
            if(check_set(mask,i)) {
                sum+=v[i];
                mx=max(mx,v[i]);
                mn=min(mn,v[i]);
            }
        }
        if((mx-mn)>=x && sum>=l && sum<=r) {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
