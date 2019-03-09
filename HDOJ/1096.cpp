// 
// @ClassName 1096
// @Description TODO
// @Date 19-3-3 上午1:31
// @Created by Insomnia
//
#include <iostream>

using namespace std;

int main() {

    int cntA, cntB, val;

    cin >> cntA;
    int sum;

    while (cntA--) {
        sum = 0;
        cin >> cntB;
        while (cntB--) {

            cin >> val;
            sum += val;
        }
        cout << sum << endl;
        if (cntA != 0) {
           cout << endl;
        }

    }

    return 0;
}