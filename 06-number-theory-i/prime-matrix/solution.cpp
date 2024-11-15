#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int cnt = 110000;
vector<bool> is_prime(cnt + 1, true);
vector<int> next_prime(cnt + 1, 0);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= cnt; ++i) {
        if (is_prime[i]) {
            for (int j = i * 2; j <= cnt; j += i) {
                is_prime[j] = false;
            }
        }
    }
    int last_prime = cnt;
    for (int i = cnt; i >= 0; --i) {
        if (is_prime[i]) {
            last_prime = i;
        }
        next_prime[i] = last_prime;
    }
}

int min_moves_to_prime_matrix(const vector<vector<int>>& matrix, int n, int m) {
    vector<long long > row_moves(n, 0), col_moves(m, 0);

    // moves to make row prime
    for (int i = 0; i < n; ++i) {
        long long  moves = 0;
        for (int j = 0; j < m; ++j) {
            moves += next_prime[matrix[i][j]] - matrix[i][j];
        }
        row_moves[i] = moves;
    }

    // moves to make column prime
    for (int j = 0; j < m; ++j) {
        long long  moves = 0;
        for (int i = 0; i < n; ++i) {
            moves += next_prime[matrix[i][j]] - matrix[i][j];
        }
        col_moves[j] = moves;
    }

    // Find the minimum of row_moves and col_moves
    long long  min_moves = *min_element(row_moves.begin(), row_moves.end());
    min_moves = min(min_moves, *min_element(col_moves.begin(), col_moves.end()));

    return min_moves;
}

int main() {
    sieve();

    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << min_moves_to_prime_matrix(matrix, n, m) << endl;
    return 0;
}
