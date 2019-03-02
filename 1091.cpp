// 
// @ClassName 1091
// @Description TODO
// @Date 19-3-3 上午12:57
// @Created by Insomnia
//
/*
 Input
Input contains multiple test cases. Each test case contains a pair of integers a and b, one pair of integers per line. A test case containing 0 0 terminates the input and this test case is not to be processed.


Output
For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.


Sample Input
1 5
10 20
0 0


Sample Output
6
30
 */
#include <iostream>

using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            continue;
        }
        cout << a + b << endl;
    }
    return 0;
}