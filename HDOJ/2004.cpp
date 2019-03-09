// 
// @ClassName 2004
// @Description TODO
// @Date 19-3-9 下午11:07
// @Created by Insomnia
//
#include <iostream>

using namespace std;
int main() {
    int score;

    while (cin >> score) {
        if (score < 0 || score > 100) {
            cout << "Score is error!" <<endl;
            continue;
        }
        if (score <= 59) {
            cout << "E" << endl;
        }
        else if (score <= 69) {
            cout << "D" << endl;
        }
        else if (score <= 79) {
            cout << "C" << endl;
        }else if (score <= 89) {
            cout << "B" << endl;
        }else if (score <= 100) {
            cout << "A" << endl;
        }

    }

    return 0;
}