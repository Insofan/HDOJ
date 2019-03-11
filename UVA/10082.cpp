//
// Created by Insomnia on 19-3-10.
// MIT License
//

#include <iostream>
#include <cstring>

using namespace std;
char s[] = "`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
int main() {

    int c;
    int i;
    while ((c = getchar()) != EOF) {
        for (i = 1; s[i] && s[i] != c; i++);
        if (s[i])putchar(s[i - 1]);
        else putchar(c);
    }

    return 0;
}