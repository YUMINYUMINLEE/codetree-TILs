#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int max_score = 0;
    // 모든 가능한 시작 위치에 대해 시뮬레이션 실행
    for (int start = 0; start < 3; ++start) {
        vector<int> cups(3, 0); // 3개의 컵 초기화
        cups[start] = 1; // 조약돌이 있는 컵을 1로 표시
        int score = 0;
        for (int i = 0; i < N; ++i) {
            int a, b, c;
            cin >> a >> b >> c;
            // 교환 수행
            swap(cups[a-1], cups[b-1]);
            // 점수 계산
            if (cups[c-1] == 1) {
                ++score;
            }
        }
        // 최대 점수 업데이트
        max_score = max(max_score, score);
    }

    cout << max_score << endl;
    return 0;
}