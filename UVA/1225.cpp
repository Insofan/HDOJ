//
// @ClassName 1225
// @Description TODO
// @Date 2019/4/20 9:42 PM
// @Created by Insomnia
//

#include <iostream>
#include <map>

using namespace std;

int main() {

    int k;
    cin >> k;
    while (k--) {
        int n;
        string str;
        map<char, int> hashMap;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            str += to_string(i);
        }

        for (auto c : str) {
            hashMap[c]++;
        }

        for (int i = '0'; i <= '9'; i++) {
            cout << hashMap[i];
            // 这里当时因为在9的后面多写了一个空格会造成pe
            if (i < '9') {
               cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
