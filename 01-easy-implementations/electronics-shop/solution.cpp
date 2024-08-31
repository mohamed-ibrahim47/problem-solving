#include <bits/stdc++.h>
using namespace std;
int main() {
    int b,n,m,mx = -1;
    cin>>b>>n>>m;
    int k[n],d[m];
    for(int i=0;i<n;i++)
        cin>>k[i];
    for(int i=0;i<m;i++)
        cin>>d[i];
    for(int i=0;i<n;i++) {
        for(int j = 0;j<m;j++)
        {
            int s = k[i] + d[j];
            if(s<=b&&s>=mx)

            {
                mx = s;
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}
