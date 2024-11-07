#include <bitset>
#include <iostream>
using namespace std;
int main() {
    int t ;
    cin >> t;
    while (t--) {
        long long l , r;
        cin >> l >> r;
        bitset<64> bits(l);
        for(int i=0; i < bits.size() ;i++) {
            if(bits[i]==0) {
                long long n = bits.to_ullong();
                if(n + (1ll<<i) <= r)
                    bits[i]= 1;
                else break;
            }
        }

        cout<<bits.to_ullong()<<endl;
    }
    return 0;
}
