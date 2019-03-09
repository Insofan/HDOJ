// 
// @ClassName 1092
// @Description TODO
// @Date 19-3-3 上午1:02
// @Created by Insomnia
//
#include <iostream>

using namespace std;

int main() {
    int cnt;

    while (cin >> cnt) {
        if (cnt == 0) {
            break;
        }
        int sum = 0, times = 0;
        int val;
        while (cin >> val) {
            sum+=val;
            times++;
            if (times >= cnt) {
                cout << sum << endl;
                break;
            }
        }
    }
    return 0;
}