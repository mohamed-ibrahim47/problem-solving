#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<pair<long long, int>> factorise(long long x) {
    vector<pair<long long, int>> res;
    for (long long i = 2; i * i <= x; i++) { 
        int pw = 0;
        while (x % i == 0) {
            pw++;
            x /= i;
        }
        if (pw > 0) {
            res.emplace_back(i, pw);
        }
    }
    if (x != 1) {
        res.emplace_back(x, 1);
    }
    return res;
}

int main() {
    bool b = true;
    while (b) {
        long long x;
        cin >> x;
        if (x == 0)
            break;
        vector<pair<long long, int>> res = factorise(x);
        string st = "";
        for (auto p : res) {
            st += to_string(p.first) + "^" + to_string(p.second) + " ";
        }
        cout << st << endl;
    }

    return 0;
}