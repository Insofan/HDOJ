//
// Created by Insomnia on 19-3-10.
// MIT License
//

#include <iostream>

using namespace std;

int main() {

    int flag = 1;
    int c;
    string s;
    while ((c = getchar()) != EOF) {
        if (c == '"') {printf("%s", flag ? "``" : "''"); flag = !flag;}
        else printf("%c", c);
    }

    return 0;
}