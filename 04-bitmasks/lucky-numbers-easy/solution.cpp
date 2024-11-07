
#include <bitset>
#include <iostream>
using namespace std;
long long num,mn=1e12;
void lucky(long long x, int c) {
    if(x >1e11)return;
    if(x >= num && c==0) {
        mn=min(mn,x);
    }
    lucky((x*10)+4,c+1);
    lucky((x*10)+7,c-1);
}

int main() {
    
    cin >> num;
    lucky(0,0);
    cout << mn << endl;
    return 0;
}
