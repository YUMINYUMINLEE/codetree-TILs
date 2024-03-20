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
    for (int start = 1; start <= 3; ++start) {
        int score = 0;
        int position = start;
        for (int i = 0; i < N; ++i) {
            int a = swaps[i * 3], b = swaps[i * 3 + 1], c = swaps[i * 3 + 2];
            if (position == a) {
                position = b;
            } else if (position == b) {
                position = a;
            }
            if (position == c) {
                ++score;
            }
        }
        max_score = max(max_score, score);
    }

    cout << max_score << endl;
    return 0;
}