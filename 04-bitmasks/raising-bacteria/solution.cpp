#include <bitset>
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int ans = 0;
    std::bitset<64> bits(n);
    ans = bits.count();
    cout<<ans<<endl;
    return 0;
}