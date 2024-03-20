#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max_score = 0;

    // 각 초기 위치에 대해 시뮬레이션을 실행
    for (int initial = 1; initial <= 3; ++initial) {
        int score = 0;
        int current = initial; // 현재 조약돌이 있는 위치

        for (int i = 0; i < n; ++i) {
            int a, b, c;
            cin >> a >> b >> c;
            
            // 교환
            if (current == a) {
                current = b;
            } else if (current == b) {
                current = a;
            }

            // c 위치에 조약돌이 있는지 확인
            if (current == c) {
                score++;
            }
        }

        max_score = max(max_score, score);
    }

    cout << max_score;
}