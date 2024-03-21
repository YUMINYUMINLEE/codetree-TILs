#include <iostream>
#include <vector>

using namespace std;

vector<int> answer;

void Print() {
    for (int num : answer) {
        cout << num << " ";
    }
    cout << "\n";
}

void Choose(int start, int m, int depth) {
    if (depth == m) {
        Print();
        return;
    }

    for (int i = start; i <= n; ++i) {
        answer.push_back(i);
        Choose(i + 1, m, depth + 1); 
        answer.pop_back();
    }
}

int main() {
    int m;
    cin >> n >> m;
    Choose(1, m, 0); 
    return 0;
}