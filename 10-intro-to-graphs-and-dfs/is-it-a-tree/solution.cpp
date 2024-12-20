#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int parent, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            // Recurse for unvisited neighbors
            if (!dfs(neighbor, node, adj, visited)) {
                return false; // Cycle detected in recursion
            }
        } else if (neighbor != parent) {
            // If a visited neighbor is not the parent, it's a cycle
            return false;
        }
    }
    return true;
}

bool isTree(int N, int M, vector<vector<int>> &adj) {
    // N - 1 edges
    if (M != N - 1) return false; 

    vector<bool> visited(N + 1, false);

    // Cycle detected
    if (!dfs(1, -1, adj, visited)) {
        return false; 
    }

    // connected graph
    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    // Adj list
    vector<vector<int>> adj(N + 1);

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (isTree(N, M, adj)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
