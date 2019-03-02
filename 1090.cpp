// 
// @ClassName 1090
// @Description TODO
// @Date 19-3-3 上午12:52
// @Created by Insomnia
//

/*
Sample Input
2
1 5
10 20

Sample Output
6
30
 */

#include <iostream>

using namespace std;

int main() {
    int count, a, b;

    int times = 0;
    while (cin >> count) {

        while (cin >> a >> b) {
            cout << a + b << endl;
            times++;
        }
        if (times >= count) {
            break;
        }
    }
    return 0;
}
