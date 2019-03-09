// 
// @ClassName 2005
// @Description TODO
// @Date 19-3-9 下午11:21
// @Created by Insomnia
//
#include <iostream>

using namespace std;

bool isYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    if (year % 4  == 0 && year % 100 != 0) {
       return true;
    }
    return false;
}

int monthDay(int m, bool isY) {


    int sumdays[12]={0,31,59,90,121,151,181,212,243,273,304,334};
    if (isY && m > 2 ) {
        return sumdays[m - 1] + 1;
    }

    return sumdays[m - 1];
}

int main() {
    char s[99];
    int y, m, d;

    //scanf 可以再中间插入 字符
    while (scanf("%d/%d/%d", &y, &m, &d) != EOF) {
        int x = false;

        if (isYear(y)) {
            x = true;
        }
        int mDay = monthDay(m, x);
        printf("%d\n", mDay + d);
    }

    return 0;
}