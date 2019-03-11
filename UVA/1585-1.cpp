//
// Created by Insomnia on 19-3-10.
// MIT License
//

#include <iostream>

using namespace std;

int main() {
    int cnt;
    cin >> cnt;

    string s;
    while (cnt--) {
        cin >> s;
        int score = 0;
        int point = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'O') {
                score += ++point;
            } else if (s[i] == 'X') {
                point = 0;
            }
        }

        cout << score << endl;
    }

    return 0;
}