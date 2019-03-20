// 
// @ClassName 340
// @Description TODO
// @Date 19-3-20 下午9:51
// @Created by Insomnia
//
#include <iostream>
#include <vector>

using namespace std;

#define arrLen 1010

int main() {
    vector<int> vec1(arrLen, 0), vec2(arrLen, 0);
    int n;
    int kCase = 0;

    while (cin >> n && n > 0) {

        cout << "Game " << ++kCase <<":" << endl;
        for (int i = 0; i < n; i++) {
            cin >> vec1[i];
        }

        while (1) {
            int A = 0, B = 0;
            for (int i = 0; i < n; i++) {
                cin >> vec2[i];
                if (vec1[i] == vec2[i]) {
                    A++;
                }
            }

            if (vec2[0] == 0) break;

            for (int i = 1; i <= 9; i++) {
                int c1 = 0, c2 = 0;
                for (int j = 0; j < n; j++) {
                    if (vec1[j] == i)  c1++;
                    if (vec2[j] == i) c2++;
                }
                B += min(c1, c2);
            }
            printf("    (%d,%d)\n", A, B - A);
        }
    }
    return 0;
}