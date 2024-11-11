#include <bitset>
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    set<int> s;
    for(int i=6;i<=n;i++) {
        int x=i;
        for(int j=2;j<=x;j++) {
            while (x%j==0) {
                s.insert(j);
                x=x/j;
            }
        }

      if(s.size()==2) {
          ans++;
      }
      s.clear();
    }
    cout<<ans<<endl;

    return 0;
}