#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a[5], mn, mx, sum = 0;
    for(int i = 0;i<5;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            mn = mx = a[0];
        }

        if(a[i]>mx)
            mx = a[i];
        if(a[i]<mn)
            mn = a[i];

        sum = sum +a[i];
    }
    cout<<sum-mx<<" "<< sum - mn<<endl;

    return 0;
}
