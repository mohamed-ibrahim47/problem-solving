#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,x,sum = 0;
    cin>>n;
    long long a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cin>>x;
    long long ans = (x/sum)*n;
    x = x%sum;
    for (int i=0;i<n;i++)
    {
        if(x<0)
            break;
        x -= a[i];
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}