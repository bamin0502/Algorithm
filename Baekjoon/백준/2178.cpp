#include <iostream>
#include <queue>
#define MAX 100

using namespace std;

int N, M;
int map[MAX][MAX];
bool visit[MAX][MAX];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void BFS(int x, int y) {
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    visit[x][y] = true;

    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < N && ny < M) {
                if (map[nx][ny] == 1 && !visit[nx][ny]) {
                    map[nx][ny] = map[x][y] + 1;
                    visit[nx][ny] = true;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &map[i][j]);
        }
    }

    BFS(0, 0);
    cout << map[N - 1][M - 1] << '\n';

    return 0;
}

