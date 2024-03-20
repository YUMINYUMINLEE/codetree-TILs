#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> swaps(N * 3); // 각 교환을 저장할 벡터
    for (int i = 0; i < N; ++i) {
        cin >> swaps[i * 3] >> swaps[i * 3 + 1] >> swaps[i * 3 + 2];
    }

    int max_score = 0;
    // 모든 가능한 시작 위치에 대해 시뮬레이션 실행
    for (int start = 1; start <= 3; ++start) {
        int score = 0;
        int position = start; // 조약돌이 현재 있는 컵의 위치
        for (int i = 0; i < N; ++i) {
            int a = swaps[i * 3], b = swaps[i * 3 + 1], c = swaps[i * 3 + 2];
            // 교환 수행
            if (position == a) {
                position = b;
            } else if (position == b) {
                position = a;
            }
            // 점수 계산
            if (position == c) {
                ++score;
            }
        }
        // 최대 점수 업데이트
        max_score = max(max_score, score);
    }

    cout << max_score << endl;
    return 0;
}