#include <iostream>
#include <vector>
using namespace std;

bool InRange(int x, int y, int n) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int cntTotal = 0;

    // 북, 동, 남, 서
    int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt1 = 0;
            for (int d = 0; d < 4; d++) {
                int nx = i + dx[d], ny = j + dy[d];
                if (InRange(nx, ny, n) && arr[nx][ny] == 1) {
                    cnt1++;
                }
            }
            if (cnt1 >= 3) {
                cntTotal++;
            }
        }
    }

    cout << cntTotal;
    return 0;
}