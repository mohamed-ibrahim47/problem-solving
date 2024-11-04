#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int l =0,r=0;
        for(int i=1;i<=n;i++) {
            int tmp = i^n;
            if(tmp>=i && tmp<=n) {
                l=i;
                r=tmp;
                break;
            }
        }
        if(l!=0 && r!=0) {
            cout<<l << " " << r <<endl;
        }else
            cout<<-1<<endl;
    }

    return 0;
}