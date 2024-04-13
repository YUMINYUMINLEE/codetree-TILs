#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int L, Q;
    cin >> L >> Q;
    vector<vector<pair<string, int>>> arr(L);  // 초밥 저장 구조 (이름, 개수)
    vector<pair<int, pair<string, int>>> human;  // 사람 저장 구조 (좌석 위치, {초밥 이름, 남은 개수})
    int nowTime = 0, lastTime = 0;

    for (int i = 0; i < Q; i++) {
        int cmd, t;
        cin >> cmd >> t;
        nowTime = t;
        int differ = nowTime - lastTime;

        // 시간 변화에 따른 벨트 회전 처리
        vector<pair<int, pair<string, int>>> tempHuman;
        for (auto& h : human) {
            int newSeat = (h.first + 1) % L;  // 시계 방향으로 1 자리 이동
            int remainingSushi = h.second.second;

            for (auto& sushi : arr[newSeat]) {
                if (sushi.first == h.second.first && remainingSushi > 0) {
                    int consume = min(remainingSushi, sushi.second);
                    sushi.second -= consume;
                    remainingSushi -= consume;
                }
            }

            if (remainingSushi > 0) {
                tempHuman.push_back({newSeat, {h.second.first, remainingSushi}});
            }
        }
        human = tempHuman;

        if (cmd == 100) {
            int seat;
            string name;
            cin >> seat >> name;
            bool found = false;
            for (auto& sushi : arr[seat]) {
                if (sushi.first == name) {
                    sushi.second += 1;
                    found = true;
                    break;
                }
            }
            if (!found) {
                arr[seat].emplace_back(name, 1);
            }
        } else if (cmd == 200) {
            int seat, num;
            string name;
            cin >> seat >> name >> num;
            bool alreadyEaten = false;
            for (auto& sushi : arr[seat]) {
                if (sushi.first == name && num > 0) {
                    int canEat = min(sushi.second, num);
                    sushi.second -= canEat;
                    num -= canEat;
                    if (sushi.second == 0) {
                        sushi = arr[seat].back();
                        arr[seat].pop_back();
                    }
                    if (num == 0) {
                        alreadyEaten = true;
                        break;
                    }
                }
            }
            if (!alreadyEaten) {
                human.emplace_back(seat, make_pair(name, num));
            }
        } else if (cmd == 300) {
            int peopleCount = 0;
            int remainingSushiCount = 0;
            for (auto& h : human) {
                peopleCount++;
            }
            for (auto& seat : arr) {
                for (auto& sushi : seat) {
                    remainingSushiCount += sushi.second;
                }
            }
            cout << peopleCount << " " << remainingSushiCount << endl;
        }
        lastTime = t;
    }

    return 0;
}