#include <iostream>
using namespace std;

int countTrucks(long long n, long long x) {
    if (n <= x) {
        return 1;
    }
    
    return countTrucks(n / 2, x) + countTrucks((n + 1) / 2, x);
}

int main() {
    long long n, x;
    
    while (cin >> n >> x) {
        cout << countTrucks(n, x) << endl;
    }

    return 0;
}
