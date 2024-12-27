#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, int &size) {
    visited[node] = true;
    size++;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, size);
        }
    }
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, m;
        cin >> n >> m; 

        vector<vector<int>> adj(n + 1);
        vector<bool> visited(n + 1, false);

        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int maxSize = 0;

        for (int i = 1; i <= n; ++i) {
            if (!visited[i]) {
                int size = 0;
                dfs(i, adj, visited, size);
                maxSize = max(maxSize, size);
            }
        }

        cout << maxSize << endl;
    }

    return 0;
}
