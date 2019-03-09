//
// Created by Insomnia on 19-3-10.
// MIT License
//

#include <iostream>

using namespace std;

int main() {

    int cnt;
    while (cin >> cnt) {
        int sum = 1;
        int num;
        while (cnt--) {
           cin >> num;
           if (num % 2 == 1) {
               sum *= num;
           }
        }
        printf("%d\n", sum);
    }
    return 0;
}