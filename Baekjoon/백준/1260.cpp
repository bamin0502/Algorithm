#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N, M, V;
vector<int> adj[1001];
bool visited[1001];

void dfs(int node) {
    cout << node << ' ';
    visited[node] = true;
    for (int i = 0; i < adj[node].size(); i++) {
        int next = adj[node][i];
        if (!visited[next]) dfs(next);
    }
}

void bfs(int start) {
    queue<int> q;
    fill_n(visited, 1001, false);
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << ' ';
        for (int i = 0; i < adj[node].size(); i++) {
            int next = adj[node][i];
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    cin >> N >> M >> V;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= N; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(V);
    cout << '\n';
    bfs(V);
    cout << '\n';
    return 0;
}

