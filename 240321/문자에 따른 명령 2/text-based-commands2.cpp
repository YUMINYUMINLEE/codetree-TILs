#include <iostream>

using namespace std;
int main() {
    string s;
    cin >> s;

    int x = 0, y = 0, dir = 3;


    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'L') {
            dir = (dir + 3) % 4; 
        } else if (s[i] == 'R') {
            dir = (dir + 1) % 4; 
        } else if (s[i] == 'F') {
            x += dx[dir]; 
            y += dy[dir];
        }
    }
    cout << x << " " << y;
    return 0;
}