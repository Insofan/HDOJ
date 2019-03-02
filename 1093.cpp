// 
// @ClassName 1093
// @Description TODO
// @Date 19-3-3 上午1:09
// @Created by Insomnia
//
#include <iostream>

//有bug 但是ac了
using namespace std;

int main() {
    int cnt;

    int times = 1;
    while (cin >> cnt) {

        int lineCnt;
        while (cin >> lineCnt) {

            int val;
            int sum = 0;
            int lineTimes = 1;
            while (cin >>val) {
                sum += val;
                if (lineTimes >= lineCnt) {
                    cout << sum << endl;
                    break;
                }
                lineTimes++;
            }
            if (times >= cnt) {
                break;
            }
            times++;
        }
    }

    return 0;
}