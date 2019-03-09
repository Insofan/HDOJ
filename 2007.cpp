// 
// @ClassName 2007
// @Description TODO
// @Date 19-3-10 上午12:31
// @Created by Insomnia
//
#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int l, r;
    while (cin >> l >> r) {
        int odd = 0, even = 0;
        /// 记得考虑这种情况
        int tmp;
        if (l > r) {
            tmp = l;
            l = r;
            r = tmp;
        }
        for (int i = l;i <= r; i++) {

            if (i % 2 == 0) {
                even += i * i;
            }  else {
                odd += pow(i, 3);
            }
        }

        cout << even << " " << odd << endl;
    }
    return 0;
}