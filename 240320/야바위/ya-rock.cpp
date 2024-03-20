#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> scores(3, 0); // 각 위치에서 얻을 수 있는 점수를 저장할 벡터

    for (int j = 0; j < n; ++j) {
        int a, b, c;
        cin >> a >> b >> c;
        // 입력된 a, b, c 값을 사용하여 교환과 점수 계산 로직을 수행
    }

    // 최대 점수를 얻을 수 있는 초기 위치 찾기
    int maxScore = 0;
    int bestPosition = 1;
    for (int i = 0; i < 3; ++i) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            bestPosition = i + 1; // 실제 위치는 인덱스 + 1
        }
    }

    cout << bestPosition;
}