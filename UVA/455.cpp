//
// @ClassName 455
// @Description TODO
// @Date 2019/4/20 10:06 PM
// @Created by Insomnia
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int k;
    cin >> k;
    while (k--) {
        string str;
        cin >> str;
        int len = str.length();

        int res = 1;
        int flag = 0;

        while (res <= len) {
            string part(str, 0, res);
            int mul = len / res;
            string tmp;
            while (mul--) {
                tmp += part;
            }
            if (tmp == str && flag == 0) {
                cout << res;
                flag = 1;
                // 这个题目的格式要求很恶心, 除了最后一个数后面只跟一个'\n'，其他的数后面得跟两个'\n'
                if (k == 0) {
                    cout << endl;
                } else {
                    cout << endl;
                    cout << endl;
                }
            }
            res++;
        }
    }
    return 0;
}
