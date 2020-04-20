#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
    double n = 0;
    int m = 0;
    while (cin >> n >> m) {
        double res = 0;

        for (int i = 0; i < m; i++) {
            res += n;
            n = sqrt(n);
        }

        printf("%.2f\n", res);
    }

    return 0;
}
