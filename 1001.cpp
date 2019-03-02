// 
// @ClassName 1001
// @Description TODO
// @Date 19-3-3 上午1:49
// @Created by Insomnia
//
#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
        while (n) {
            sum += n--;
        }
        cout << sum << endl;
        cout << endl;
    }

    return 0;
}
