#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<bool> isPrime = sieve(n);
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) primes.push_back(i);
    }

    int count = 0;
    for (int i = 1; i < primes.size(); ++i) {
        int candidate = primes[i - 1] + primes[i] + 1;
        if (candidate <= n && isPrime[candidate]) {
            ++count;
        }
    }
    if (count >= k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}