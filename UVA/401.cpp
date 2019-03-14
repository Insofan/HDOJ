//
// @ClassName 401
// @Description TODO
// @Date 2019/3/14 9:55 AM
// @Created by Insomnia
//


//看起来结果一模一样 但是显示 Presentation error
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2 = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    map<char, char> hashMap;
    for (int i = 0; i < s1.length(); i++) {
        hashMap[s1[i]] = s2[i];
    }
    vector<string> ap;
    ap.push_back(" -- is not a palindrome.");
    ap.push_back(" -- is a regular palindrome.");
    ap.push_back(" -- is a mirrored string.");
    ap.push_back(" -- is a mirrored palindrome.");
    string s;
    while (cin  >> s) {
        int mFlag = 1, pFlag = 1;
        int len = s.length();
        for (int i = 0; i < (len + 1) / 2; i++) {
            if (s[i] != s[len - 1 - i]) {
                pFlag = 0;
            }
            if (hashMap[s[i]] != s[len - 1 - i]) {
                mFlag = 0;
            }
        }
        cout << s << ap[pFlag + mFlag * 2] << endl;
    }
    return 0;
}
