// 
// @ClassName 2000
// @Description TODO
// @Date 19-3-4 上午12:10
// @Created by Insomnia
//
#include <iostream>

using namespace std;


int main() {

    char a, b, c;

    while (cin >> a >> b >> c) {

        if (a <= b && b <= c) {
            cout << a << " " << b << " " << c << endl;
        }

        if (a<=c && c <= b) {
            cout << a << " " << c << " " << b << endl;
        }
        if (b<=a && a <= c) {
            cout << b << " " << a << " " << c << endl;
        }
        if (b<=c && c <= a) {
            cout << b << " " << c << " " << a << endl;
        }
        if (c<=a && a <= b) {
            cout << c << " " << a << " " << b << endl;
        }
        if (c<=b && b <= a) {
            cout << c << " " << b << " " << a << endl;
        }
    }

    return 0;
}