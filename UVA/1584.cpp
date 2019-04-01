//
// Created by Insomnia on 19-4-1.
// MIT License
//
#include <iostream>
#include <vector>
#include <cstring>

#define maxn 105

using namespace std;

bool myLess(const char *s, int p, int q) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        // 这一段是环形的数组
        if (s[(p + i) % len] != s[(q + i) % len]) {
            return s[(p + i) % len] < s[(q + i) % len];
        }
    }
    return false;
}

int main() {
    int T;
    char s[maxn];
    scanf("%d", &T);

    while (T--) {
        scanf("%s", s);
        int ans = 0;
        int n = strlen(s);
        for (int i = 0; i < n; i++) {
            if (myLess(s, i, ans)) ans = i;
        }

        for (int i = 0; i < n; i++) {
            putchar(s[(ans + i) % n]);
        }

        putchar('\n');
    }

    return 0;
}
