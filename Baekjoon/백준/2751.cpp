#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<>> pq;

    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        pq.push(num);
    }

    while(!pq.empty()) {
        cout << pq.top() << '\n';
        pq.pop();
    }

    return 0;
}
