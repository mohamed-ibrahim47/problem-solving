#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dfs(int employee, const vector<vector<int>> &adj) {
    int maxDepth = 0;
    for (int n : adj[employee]) {
        maxDepth = max(maxDepth, dfs(n, adj));
    }
    return maxDepth + 1; 
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);
    vector<int> managers; 

    for (int i = 1; i <= n; ++i) {
        int pi;
        cin >> pi;
        if (pi == -1) {
            managers.push_back(i);
        } else {
            adj[pi].push_back(i); 
        }
    }

    int maxGroups = 0;

    
    for (int manager : managers) {
        maxGroups = max(maxGroups, dfs(manager, adj));
    }

    cout << maxGroups << endl;
    return 0;
}
