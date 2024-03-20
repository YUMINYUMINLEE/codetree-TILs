#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max_score = 0;
    
    // 각 초기 위치에 대한 시뮬레이션 실행
    for(int i = 1; i <= 3; i++) {
        vector<int> cups = {0, 0, 0, 0}; // 1부터 3까지 인덱스를 사용하기 위해 크기가 4인 벡터 초기화
        cups[i] = 1; // 초기 조약돌의 위치 설정
        int score = 0; // 현재 초기 위치에 대한 점수
        
        for(int j = 0; j < n; j++) {
            int a, b, c;
            cin >> a >> b >> c; // 교환할 컵의 번호와 확인할 컵의 번호 입력 받음
            swap(cups[a], cups[b]); // 컵 위치 교환
            if(cups[c] == 1) score++; // 조약돌이 있는 컵을 선택하면 점수 증가
        }
        
        max_score = max(max_score, score); // 최대 점수 업데이트
    }
    
    cout << max_score; // 최대 점수 출력
}