// 
// @ClassName 1586
// @Description TODO
// @Date 19-4-2 上午12:57
// @Created by Insomnia
//

#include <iostream>
#include <cstring>
using namespace std;
#define maxn 100

double getVal(char tmp) {
    switch (tmp) {
        case 'C':
            return 12.01;
        case 'H':
            return 1.008;
        case 'O':
            return 16.00;
        case 'N':
            return 14.01;
    }
    return 0.0;
}

int main() {

    int k;
    cin >> k;
    while (k--) {
        char s[maxn];
        scanf("%s", s);
        int n = strlen(s);
        double res = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (isdigit(s[i])) {
                int mul = 0;
                while (isdigit(s[i])) {
                    mul = mul * 10 + (s[i--] - '0');
                }
                res += mul * getVal(s[--i]);
            } else {
                res += getVal(s[i]);
            }
        }
        printf("%.3f\n", res);
    }
    return 0;
}