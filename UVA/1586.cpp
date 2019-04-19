// 
// @ClassName 1586
// @Description TODO
// @Date 19-4-2 上午12:57
// @Created by Insomnia
//

#include <iostream>
#include <cstring>
#include <map>
using namespace std;
#define maxn 100


int main() {
    map<char, double> valMap;
    valMap['C'] = 12.01;
    valMap['H'] = 1.008;
    valMap['O'] = 16.00;
    valMap['N'] = 14.01;

    int k;
    cin >> k;
    while (k--) {
        char s[maxn];
        scanf("%s", s);
        double res = 0;
        int len = strlen(s);

        s[len] = 'E';

        for (int i = 0; s[i] != 'E'; i++) {
           if (valMap[s[i]]) {
               if (s[i + 1] < '0' || s[i + 1] > '9') {
                   res += valMap[s[i]];
               } else {
                   int base = 0, cur = i + 1;

                   while (isdigit(s[cur])) {
                       base = base * 10 + s[cur++] - '0';
                   }

                   res += valMap[s[i]] * base;
               }
           }
        }

        printf("%.3f\n", res);
    }
    return 0;
}