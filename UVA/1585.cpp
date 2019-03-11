//
// Created by Insomnia on 19-3-10.
// MIT License
//

#include <iostream>
#include <string>

using namespace std;

int get(int cnt) {
    int sum = 0;
    while (cnt) {
        sum += cnt--;
    }

    return sum;
}

int main() {
    int cnt;
    cin >> cnt;
    string s;

    while (cin >> s) {
        int score = 0;
        int numCnt = 0;

        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'O') {
                numCnt++;
                if (j == s.length() - 1) {
                    score += get(numCnt);
                }
            } else if (s[j] == 'X') {
                score += get(numCnt);
                numCnt = 0;
            }
        }
        cout << score << endl;
        cnt--;
        if (cnt == 0) {
            break;
        }
    }

    return 0;
}